/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:18:27 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:38:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int l;
    char *s2;
    int n;
    
    i = 0;
    n = 0;
    l = ft_strlen(s1) - 1 ;
    while (ft_strchr(set, s1[i]) != NULL)
        i++;
    while (ft_strchr(set, s1[l]) != NULL)
        l--;
    s2 = (char *)malloc((l - i + 1) * sizeof(char));
    if (!s2)
        return (NULL);
    while(i <= l)
    {
        s2[n] = s1[i];
        i++;
        n++;    
    }
    s2[n] = '\0';
    return (s2);
}
/*
int main()
{
    char    *s1;
    char    *set;

    s1 = "xyxmatxyhieuyxy";
    set = "xy";

    ft_strtrim(s1, set);
    return (0);
}*/