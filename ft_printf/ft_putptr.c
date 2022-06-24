/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:08:07 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/24 23:50:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	static int len;

	if (!len)
		len = 0;
    if (n >= 16)
    {
        ft_putptr(n / 16);
        ft_putptr(n % 16);
    }
    else
    {
        if (n <= 9)
            ft_putchar((n + '0'));
        else
            ft_putchar((n - 10 + 'a'));
		len++;
    }
	
    return (len);
}