/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:44:23 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/22 15:49:48 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdarg.h>

int print_ints(int num, ...)
{
	va_list	args;
	int i;
	int value;
	
	i = 0;
	value = 0;
	va_start(args, num);
	while(i < num)
	{
		value = va_arg(args, int);
		printf("%d : %d\n", i, value);
		i++;	
	}
	va_end(args);
}

int main()
{
	int	a;

	a = 42;
	print_ints(3, a, 26, 312);
	print_ints(2, 256, 512);

	return 0;
}