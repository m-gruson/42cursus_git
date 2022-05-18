/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:14 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/17 12:48:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_tab(char const *s, char c)
{
     int    l;
     int    i;
     int separator;

     l = 0;
     i = 0;
     separator = 0;
     while (s[l])
    {
        if (s[l] == c)
        {
            separator++;
        }
        l++;
    }
    return (separator);
}

void ft_taboftab(char const *s, char c, char **s1)
{
    int l;
    int i;
    int t;

    l = 0; 
    i = 0;
    t = 0;
    while (s[l])
    {
        if (s[l] == c)
        {
            s1[t] = (char *)malloc((i + 1) * sizeof(char));
            t++;
            i = 0;
        }
        l++;
        i++;
    }
    if (i != 0)
        s1[t++] = (char *)malloc((i + 1) * sizeof(char));
}

char **ft_fill(char const *s, char c, char **s1)
{
    int l;
    int i;
    int t;

    l = 0;
    i = 0;
    t = 0;
    while(s[l])
    {
        if (s[l] != c)
        {
            s1[t][i] = s[l];
            i++;
        }
        if (s[l] == c)
        {
            s1[t][i] = '\0';
            printf("%s\n", s1[t]);
            t++;
            i = 0;
        }  
        l++;
    }
    printf("%s\n", s1[t]);
    s1[t++] = NULL;
    return (s1);
}

char **ft_split(char const *s, char c)
{
    int i;
    int l;
    int count_c;
    char **s1;

    i = 0;
    l = 0;
    count_c = 0;

    s1 = (char **)malloc((ft_tab(s, c) + 2) * sizeof(char *)); // sans l'etoile dans le second char ca marchait pas
    ft_taboftab(s, c, s1);
    ft_fill(s, c, s1);
    return (s1);
}

/*
int main() {
    char const *s;
    char    c;

    s = "coucou maman comment vas tu ce matin ?";
    c = ' ';
    ft_split(s, c);

    return 0;
}*/