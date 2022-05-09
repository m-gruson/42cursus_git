/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:01:31 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 19:29:27 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)s+i);
        i++;
    }
    return (NULL);
}

int main ()
{
    char *str;

    str = "helleo";
    printf("%s\n", ft_strchr(str, 'e'));
    printf("%s\n", strchr(str, 'e'));
}