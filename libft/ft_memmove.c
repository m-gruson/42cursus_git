/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:50:53 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/10 15:37:27 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_memmove(voiddst, const void *src, size_t len)
{
    size_t    i;

    i = 0;
    if (src > dst)
    {
        while (i < len)
        {
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
            i++;
        }
    }
    else
    {
        while (len)
        {
            len--;
            ((unsigned char*)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    return (dst);
}