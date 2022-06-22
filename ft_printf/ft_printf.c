/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:27:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/22 17:28:10 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void	ft_conversion_detector(va_list args, const char *arg_display, int i)
{
	if (arg_display[i] == '%')
	{
		arg_display = va_arg(args, const char *);
		i = 0;
	}
	while(arg_display && arg_display[i])
	{
		write(1, &arg_display[i], 1);
		i++;
	}
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
			ft_conversion_detector(args, arg_display, i);
			i++;
		}
		write(1, &arg_display[i], 1);
		i++;
	}
	va_end(args);
	return 0;
}

int	main()
{
	char *str;
	
	str = "troie";
	ft_printf("debut %s fin %s", str, str);
	return 0;	
}