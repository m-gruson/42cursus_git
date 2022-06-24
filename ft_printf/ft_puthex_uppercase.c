/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:26:26 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/24 18:40:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_uppercase(long long int n)
{
	static int	len;
	
	if (!len)
		len = 0;
	if (n >= 16)
	{
		ft_puthex_uppercase(n / 16);
		ft_puthex_uppercase(n % 16);
	}
    else
    {
        if (n <= 9)
            ft_putchar((n + '0'));
        else
            ft_putchar((n - 10 + 'A'));
		len++;
    }
	return(len);
}