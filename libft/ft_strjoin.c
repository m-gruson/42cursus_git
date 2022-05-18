/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:48:01 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:30:27 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_strlen(char const *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int l; 
    char *s3;

    i = 0;
    l = 0;
    s3 = (char *)malloc(( ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!s3)
        return (NULL);
    while(s1[i])
    {
        s3[l] = s1[i];
        i++;
        l++;
    }
    i = 0;
    while(s2[i] )
    {
        s3[l] = s2[i];
        i++;
        l++;
    }
    s3[l] = '\0';
    return (s3);
}

int main()
{
    char *s1;
    char *s2;
    
    s1 = "mathieu";
    s2 = "gruson";
    printf("%s\n", ft_strjoin(s1, s2));
}