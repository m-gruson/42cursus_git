/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:41:54 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 15:48:45 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t l;
    
    i = 0;
    l= 0;
    if (little[i] == '\0')
        return ((char*)big);
    while(big[i] != '\0' && i < len)
    {
        while(little[l] != '\0' && big[i] == little[l] && i < len)
        {
            
            i++;
            l++;
            if (little[l] == '\0')
                return ((char*)little);
        }
        l = 0;
        i++;
    }
    return ("NULL");
}
/*
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Foo";
    
    printf("%s\n", ft_strnstr(largestring, smallstring, 3));
    return 0;
}*/