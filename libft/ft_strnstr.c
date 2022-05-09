/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:41:54 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 21:31:08 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libbsd.h>
#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
[
    int i;
    
    i = 0;
    if (little(i) == '\0')
        return (big)
    while(big[i] != '\0')
    {
        while(little(l) != '\0' && big(i) == little(l))
        {
            
            i++
            l++
        }
        if (little(l) == '\0')
            return (big)
        l = 0;
        i++
    }
    return (NULL)
]

int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    
    printf("%d\n", strnstr(largestring, smallstring, 4));
    return 0;
}