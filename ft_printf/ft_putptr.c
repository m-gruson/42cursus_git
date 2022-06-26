/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:08:07 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/26 21:01:53 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	static int len;
	char *base;
	
	base = "0123456789abcdef";

	if (!len)
		len = 0;
    if (n >= 16)
    {
        ft_putptr(n / 16);
        ft_putptr(n % 16);
	}
    if (n < 16)
		{
            ft_putchar(base[n]);
			len++;
		}
	return (len);
}

// int main()
// {
// 	int t;

// 	t = 2147483647;
// 	ft_putptr(t);
// }