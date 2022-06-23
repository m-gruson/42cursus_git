/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:33:52 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/23 20:40:18 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_puthex_lowercase(long long int n)
{
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
    }
	
}