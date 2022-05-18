/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:32:17 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:38:35 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	l = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
        printf("%s\n", dest);
	}
	return (l);
}
/*
int main()
{
    char    tab[50] = "salut";
    char    tab1[] = "hi";
    int nb;
    
    nb = 15;
    printf("%d\n", ft_strlcpy(tab, tab1, nb));

    return 0;

}*/