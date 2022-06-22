/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:27:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/22 18:58:52 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

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

void	ft_d_conversion(va_list args, const char *arg_display)
{
	int	i;

	i = va_arg(args, int);
	ft_putnbr(i);
}

void	ft_conversion_selector(va_list args, const char *arg_display, int i)
{
	i++;
	if (arg_display[i] == 's')
		ft_s_conversion(args, arg_display);
	if (arg_display[i] == 'c')
		ft_c_conversion(args, arg_display);	
	// if (arg_display[i] == 'p')
	if (arg_display[i] == 'd' || arg_display[i+1] == 'i')
		ft_d_conversion(args, arg_display);
	// if (arg_display[i] == 'u')
	// if (arg_display[i] == 'x')
	// if (arg_display[i] == 'X')
	// if (arg_display[i] == '%')
	// write(1, &arg_display[i++], 1);
	// write(1, &arg_display[i], 1);
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
	char *s;
	int	d;
	
	printf("hello\n");
	ft_printf("hello\n");
	
	s = "troie";
	printf("debut %s fin %s \n", s, s);
	ft_printf("debut %s fin %s \n", s, s);

	c = 'm';
	printf("debut %c fin %c \n", c, c);
	ft_printf("debut %c fin %c \n", c, c);

	d = 10;
	printf("debut %d fin %d \n", d, d);
	ft_printf("debut %d fin %d \n", d, d);

	printf("debut %i fin %i \n", d, d);
	ft_printf("debut %i fin %i \n", d, d);

	return 0;	
}