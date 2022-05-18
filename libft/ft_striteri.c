/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:25:56 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:38:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    f_test(unsigned int i, char *str)
{
    if (str[i] == 'm')
        str[i] = 'l';
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    
    i = 0;
    while(s[i])
    {
        f(i, s); // au debut javais ecris : s[i] = f(i, s) mais c est pas possible car la fonction f ne renvoie rien
        i++;
    }
    printf("%s\n", s);
}
/*
int main()
{
    char str[] = "mathieu";

    ft_striteri(str, f_test);
    return (0);
}*/