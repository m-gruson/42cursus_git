/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:22 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 19:40:44 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *ft_strchr(const char *s, int c)
{
    int i;
    int l;
    
    i = 0;
    l = ft_strlen((char *)s);
    while (l != 0)
    {
        if (s[l] == c)
            return ((char *)s+l);
        l--;
    }
    return (NULL);
}

int main ()
{
    char *str;

    str = "helleo";
    printf("%s\n", ft_strchr(str, 'l'));
    printf("%s\n", strrchr(str, 'l'));
}