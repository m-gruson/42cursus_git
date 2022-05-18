/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:24:53 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:37:27 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (*(char *)s1 != '\0' && *(char *)s2 != '\0' && i < n)
    {
        if (*(char *)s1 != *(char *)s2)
            return (*(char *)s1 - *(char *)s2);
        i++;
        s1++;
        s2++;
    }
    return (0);
}

/*
int main()
{
    char *tab;
    char *tab1;

    tab = "hella";
    tab1 = "hzllb";

    printf("%d\n", ft_memcmp(tab, tab1, 0));
    return (0);
}*/