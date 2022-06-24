/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:27:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/24 23:37:54 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s_conversion(va_list args)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while(str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (ft_strlen(str)); // ok
}

int	ft_c_conversion(va_list args, const char *str_arg)
{
	str_arg = va_arg(args, const char *);
	write(1, &str_arg, 1);
	return (1); // ok
}

int	ft_d_conversion(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (ft_putnbr(d)); // ok
}

int	ft_p_conversion(va_list args)
{
	unsigned long long p;
	
	write(1, "0x", 2);
	p = va_arg(args, unsigned long long);
	return(ft_putptr(p) + 2 ); // ok
}

int	ft_x_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	return(ft_puthex_lowercase(x)); // ok
}

int	ft_X_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	return(ft_puthex_uppercase(x)); // ok
}

int	ft_u_conversion(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	return(ft_putnbr_unsigned(u)); // ok
}

int	ft_conversion_selector(va_list args, const char *str_arg, int i)
{
	unsigned int len;

	len = 0;
	i++;
	if (str_arg[i] == 's')
		len = ft_s_conversion(args);
	if (str_arg[i] == 'c')
		len = ft_c_conversion(args, str_arg);	
	if (str_arg[i] == 'p')
		len = ft_p_conversion(args);
	if (str_arg[i] == 'd' || str_arg[i] == 'i')
		len = ft_d_conversion(args);
	if (str_arg[i] == 'u')
		len = ft_u_conversion(args);
	if (str_arg[i] == 'x')
		len = ft_x_conversion(args);
	if (str_arg[i] == 'X')
		len = ft_X_conversion(args);
	if (str_arg[i] == '%')
	{
		ft_putchar('%');
		len++; 
	}
	return (len);
}

int	ft_printf(const char *first_arg, ...)
{
	va_list	args;
	int	i;
	const char *str_arg;
	int len;
	
	va_start(args, first_arg);
	i = 0;
	len = 0;
	str_arg = first_arg;
	while(str_arg[i])
	{
		if(str_arg[i] == '%')
		{
			len = len + ft_conversion_selector(args, str_arg, i);
			i = i + 2;
		}
		if(str_arg[i])
		{
			write(1, &str_arg[i], 1);
			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}

// int	main()
// {

// 	printf("%d\n", printf(" %u %u %u %u %u %u ", INT_MAX, INT_MIN, 0, -42));
// 	printf("\n\n");
// 	ft_printf("%d\n", ft_printf(" %u %u %u %u %u %u ", INT_MAX, INT_MIN, 0, -42));

// 	return 0;	
// 