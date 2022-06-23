/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:08:07 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/23 22:46:18 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int        ft_putptr(long long int n)
{
    int	i;
	int len;

	i = 0;

    if (i == 0)
	{
        write(1, "0x", 2);
		len = 0;
	}
    i++;
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