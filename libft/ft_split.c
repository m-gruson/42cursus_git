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
     int separator;
	 int	a;

	 a = 0;
     l = 0;
     separator = 0;
     while (s[l])
    {
        if (s[l] != c && a != 1)
        {
			a = 1;
            separator++;
        }
		if (s[l] == c)
			a = 0;
        l++;
    }
	printf("%d\n", separator);
    return (separator);
}

void ft_taboftab(char const *s, char c, char **s1)
{
    int l;
    int count;
	int	a;
	int	t;

	a = 0;
    l = 0; 
    t = 0;
    while (s[l])
    {
		while (s[l] != c)
		{
        	count++;
			l++;
			a = 1;
		}
		if ((a = 1) && (s[l] == c))
		{
        	s1[t] = (char *)malloc((count + 1) * sizeof(char));
        	t++;
        	count = 0;
		}
		l++;
	}
}

char **ft_fill(char const *s, char c, char **s1)
{
    int l;
    int i;
    int t;
	int	a;

    l = 0;
    i = 0;
    t = 0;
	a = 0;
    while(s[l])
    {
        if (s[l] != c)
        {
            s1[t][i] = s[l];
            i++;
			a = 1;
        }
        if (s[l] == c && a == 1)
        {
            s1[t][i] = '\0';
           	printf("%s\n", s1[t]);
            t++;
            i = 0;
        }  
        l++;
    }
    s1[t++] = NULL;
    return (s1);
}

char **ft_split(char const *s, char c)
{
    char **s1;
	
	s1 = (char **)malloc((ft_tab(s, c) + 1) * sizeof(char *)); // sans l'etoile dans le second char ca marchait pas
	if (!s1 || !s || !c)
			return (NULL);
	ft_taboftab(s, c, s1);
    ft_fill(s, c, s1);
    return (s1);
}


int main() {
    char const *s;
    char    c;
    s = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
    c = ' ';
    ft_split(s, c);
    return 0;
}*/