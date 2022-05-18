/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:30:35 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/18 13:30:34 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *s)
{
    char    *new_string;
    int l;
    int i;

    i = 0;
    l = ft_strlen(s);
    printf("%d\n", l);
    new_string = (char *)malloc( l * sizeof(char) + 1);
    if (!new_string)
        return (0);
    while(s[i])
    {
        new_string[i] = s[i];
        i++;
    }
    new_string[i] = '\0';
    printf("%s\n", new_string);
    return (new_string);
}

int main()
{
    char *p;

    p = "mathieu";
    ft_strdup(p);
    return 0;


}