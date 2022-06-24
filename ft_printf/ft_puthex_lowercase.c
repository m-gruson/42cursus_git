/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:33:52 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/24 16:23:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex_lowercase(long long int n)
{
	static int len;
	
	if (!len)
		len = 0;
	if (n >= 16)
	{
		ft_puthex_lowercase(n / 16);
		ft_puthex_lowercase(n % 16);
	}
    else
    {
        if (n <= 9)
            ft_putchar((n + '0'));
		else
            ft_putchar((n - 10 + 'a'));
		len++;
    }
	return(len);
}