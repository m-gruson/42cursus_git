/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:58:41 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:38:43 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    f_test(unsigned int i, char c)
{
    if (c == 'm')
        c = 't';
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) // autre syntaxe possible : char f(unsigned int, char)
{
    unsigned int i;
    char *n;

    i = 0;
    n = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!n) // autre syntaxe possible : if (n == NULL)
        return (NULL);
    while(s[i])
    {
        n[i] = (*f)(i, s[i]); // autre syntaxe possible : f(i, s[i])
        i++;
    }
    n[i] = '\0';
    return (n);
}
/*
int main()
{
    char *s;

    s = "mathieu";

    printf("%s\n", ft_strmapi(s, f_test));
    return (0);
}*/