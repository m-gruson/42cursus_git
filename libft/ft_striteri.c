/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:25:56 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 16:14:16 by mgruson          ###   ########.fr       */
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
        (*f)(i, s); 
        i++;
    }
    printf("%s\n", s);
}

int main()
{
    char str[] = "mmmmmmmmmmmmm";

    ft_striteri(str, f_test);
    return (0);
}