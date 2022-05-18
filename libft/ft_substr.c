/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:27:19 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:27:51 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int st;
    char *n;
    
    i = 0;
    st = start;
    n = (char *)malloc(len * sizeof(char) + 1);
    if (!n)
        return(NULL);
    while (i < len)
    {
        n[i] = s[st];
        i++;
        st++; 
    }
    n[i] = '\0';
    return(n);       
}

int main()
{
    char *s;

    s = "mathieu";
    printf("%s\n", ft_substr(s, 2, 2));
    return 0;
}
