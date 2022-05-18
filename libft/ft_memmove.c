/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:50:53 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:31:14 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t    i;

    i = 0;
    if (src > dst)
    {
        while (i < n)
        {
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
            i++;
        }
    }
    else
    {
        while (n)
        {
            n--;
            ((unsigned char*)dst)[n] = ((unsigned char *)src)[n];
        }
    }
    return (dst);
}