/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:37:45 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 10:06:41 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int	ft_strlen(char *str)
{
	int	i;
    i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len || size == 0)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
    printf("%s\n", dest);
	return (dest_len + src_len);
}

int main()
{
	char tab[50] = "hellop";
	char tab1[] = "hella";
	unsigned int	nb;
	
	nb = 14;

	printf("%d\n", ft_strlcat(tab, tab1, nb));

	return 0;
}

