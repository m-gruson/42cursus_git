/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:27:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/23 22:57:41 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_s_conversion(va_list args, const char *arg_display)
{
	int i;

	i = 0;
	arg_display = va_arg(args, const char *);
	while(arg_display && arg_display[i])
	{
		write(1, &arg_display[i], 1);
		i++;
	}
	return (ft_strlen(arg_display));
}

int	ft_c_conversion(va_list args, const char *arg_display)
{
	arg_display = va_arg(args, const char *);
	write(1, &arg_display, 1);
	return (1);
}

int	ft_d_conversion(va_list args)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr(d);
	return (ft_numlen(d));
}

int	ft_p_conversion(va_list args)
{
	long long int	p;

	p = va_arg(args, long long int);
	return(ft_putptr(p));
}

int	ft_x_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	return(ft_puthex_lowercase(x));
}

// finir d'implementer les return;

int	ft_X_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	ft_puthex_uppercase(x);
}

int	ft_u_conversion(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	ft_putnbr_unsigned(u);
}

int	ft_conversion_selector(va_list args, const char *arg_display, int i)
{
	unsigned int len;

	len = 0;
	i++;
	if (arg_display[i] == 's')
		len = ft_s_conversion(args, arg_display);
	if (arg_display[i] == 'c')
		len = ft_c_conversion(args, arg_display);	
	if (arg_display[i] == 'p')
		len = ft_p_conversion(args);
	if (arg_display[i] == 'd' || arg_display[i] == 'i')
		len = ft_d_conversion(args);
	if (arg_display[i] == 'u')
		len = ft_u_conversion(args);
	if (arg_display[i] == 'x')
		len = ft_x_conversion(args);
	if (arg_display[i] == 'X')
		len = ft_X_conversion(args);
	if (arg_display[i] == '%')
		len = ft_putchar('%');
	
	return (len);
}

int	ft_printf(const char *first_arg, ...)
{
	va_list	args;
	int	i;
	const char *arg_display;
	int len;
	
	va_start(args, first_arg);
	i = 0;
	len = 0;
	arg_display = first_arg;
	while(arg_display && arg_display[i])
	{
		if(arg_display[i] == '%')
		{
			len = len + ft_conversion_selector(args, arg_display, i);
			i = i + 2;
		}
		write(1, &arg_display[i], 1);
		i++;
		len++;
	}
	va_end(args);
	return ();
}

int	main()
{
	char c;
	int	d;
	

	c = 'm';
	d = -1546846;
	
	printf("hello\n");
	ft_printf("hello\n");
	
	printf("debut %c fin %p \n", c, "hello");
	ft_printf("debut %c fin %p \n", c, "hello");

	printf("debut %c fin %c \n", c, c);
	ft_printf("debut %c fin %c \n", c, c);

	printf("debut %X fin %x \n", d, d);
	ft_printf("debut %X fin %x \n", d, d);

	printf("debut %% fin %i \n", d);
	ft_printf("debut %% fin %i \n", d);

	printf("debut %u fin %i \n", d, d);
	ft_printf("debut %u fin %i \n", d, d);

	printf("%d", printf("debut %u fin %i \n", d, d));
	// ft_printf("%d", ft_printf("debut %u fin %i \n", d, d));

	

	return 0;	
}