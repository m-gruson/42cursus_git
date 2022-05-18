/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:46:39 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 15:41:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
   size_t  i;

   i = 0;
   
   while(i != n)
   {
       *(char*)s++ = c;
       i++;
   }
    return ((char*)s); 
}
/*
int main()
{
    char tab[10] = "mathieu";
    char tab1[10] = "oscar";

    memset(tab, 3, 4);
    ft_memset(tab1, 3, 4);
    return (0);
}

int main(void)
{
    int i;
    i = 0;
    while (str[i])
    {
        str[i] = 'd';
        i++;
    }
}

int main(void)
{
    char *str;
    while (*str)
    {
        *str = 'd';
        str++;
    }
}*/