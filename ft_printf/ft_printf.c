/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:27:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/23 20:49:52 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_s_conversion(va_list args, const char *arg_display)
{
	int i;

	i = 0;
	arg_display = va_arg(args, const char *);
	while(arg_display && arg_display[i])
	{
		write(1, &arg_display[i], 1);
		i++;
	}
}

void	ft_c_conversion(va_list args, const char *arg_display)
{
	arg_display = va_arg(args, const char *);
	write(1, &arg_display, 1);
}

void	ft_d_conversion(va_list args)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr(d);
}

void	ft_p_conversion(va_list args)
{
	long long int	p;

	p = va_arg(args, long long int);
	ft_putptr(p);
}

void	ft_x_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	ft_puthex_lowercase(x);
}

void	ft_X_conversion(va_list args)
{
	long long int x;

	x = va_arg(args, long long int);
	ft_puthex_uppercase(x);
}

// void	ft_percentage_conversion(args, int i)
// {
// 	write(1, &arg_display[i++], 1);
// 	write(1, &arg_display[i], 1);
// }

void	ft_conversion_selector(va_list args, const char *arg_display, int i)
{
	i++;
	if (arg_display[i] == 's')
		ft_s_conversion(args, arg_display);
	if (arg_display[i] == 'c')
		ft_c_conversion(args, arg_display);	
	if (arg_display[i] == 'p')
		ft_p_conversion(args);
	if (arg_display[i] == 'd' || arg_display[i+1] == 'i')
		ft_d_conversion(args);
	// if (arg_display[i] == 'u')
	if (arg_display[i] == 'x')
		ft_x_conversion(args);
	if (arg_display[i] == 'X')
		ft_X_conversion(args);
	// if (arg_display[i] == '%')
	// 	ft_percentage_conversion(args, i);

}

int	ft_printf(const char *first_arg, ...)
{
	va_list	args;
	int	i;
	const char *arg_display;

	va_start(args, first_arg);
	i = 0;
	arg_display = first_arg;
	while(arg_display && arg_display[i])
	{
		if(arg_display[i] == '%')
		{
			ft_conversion_selector(args, arg_display, i);
			i = i + 2;
		}
		write(1, &arg_display[i], 1);
		i++;
	}
	va_end(args);
	return 0;
}

int	main()
{
	char c;

	int	d;
	

	c = 'm';
	d = 1546846;
	
	printf("hello\n");
	ft_printf("hello\n");
	
	printf("debut %c fin %p \n", c, "hello");
	ft_printf("debut %c fin %p \n", c, "hello");

	printf("debut %c fin %c \n", c, c);
	ft_printf("debut %c fin %c \n", c, c);

	printf("debut %X fin %x \n", d, d);
	ft_printf("debut %X fin %x \n", d, d);

	// printf("debut %% fin %i \n", d);
	// ft_printf("debut %% fin %i \n", d);

	return 0;	
}