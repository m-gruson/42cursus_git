/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:35:38 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:19:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
    {
        i++;
        
    }
    return (s1[i] - s2[i]);
}

int main()
{
    const char tab[10] = "a";
    const char tab1[10] = "";
    int nb;

    nb = 10;
    printf("%d\n", ft_strncmp(tab, tab1, nb));
    printf("%d\n", strncmp(tab, tab1, nb));
}
