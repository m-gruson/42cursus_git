/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:27:19 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/25 17:22:45 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sublen(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str && str[i] && i < start)
		i++;
	j = 0;
	while (str && str[i] && j < len)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!str)
		return (NULL);
	len = ft_sublen(str, start, len);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && str[start + i] != '\0')
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int st;
    char *n;
    
    i = 0;
    st = start;
    n = (char *)malloc((len + 1) * sizeof(char));
    if (!n)
        return(NULL);
    while (s[i])
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
}*/
