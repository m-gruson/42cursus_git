/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:24:48 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:37:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
  //  printf("%s\n", (char*)s);
    while (*(char *)(s + i) != '\0' && i < n)
    {
        if (*(char *)(s + i) == (unsigned char)c)
        {
           // printf("%s\n", (char *)(s + i));
            return ((char *)(s + i));
        }
        i++;
    }
    return ("NULL");
}
/*
int main()
{
    char *tab;

    tab = "hella";
    ft_memchr(tab, 'e', 6);
    return (0);
}*/