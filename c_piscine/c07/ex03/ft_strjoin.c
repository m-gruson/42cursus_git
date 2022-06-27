/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:28:59 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/29 17:49:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

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

char	*ft_strcat(char *dest, char **src, char *sep, int size)
{
	int	n;
	int	i;
	int	j;

	n = 0;
	j = 0;
	while (n < size)
	{
		i = 0;
		while (src[n][i] != '\0')
		{
			dest[j] = src[n][i];
			i++;
			j++;
		}
		i = 0;
		n++;
		while (sep[i] != '\0' && n < size)
		{
			dest[j] = sep[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int	l;
	int	n;
	int	i;

	n = 0;
	l = 0;
	i = 0;
	while (n < size)
	{
		l = l + ft_strlen(strs[n]);
		n++;

	}
	while (i < size)
	{
		l = l + ft_strlen(sep);
		i++;
	}
	join = malloc( l + 1 * sizeof(char));
	if (!join)
		return(NULL);
	if (size == 0)
		return(join);
	ft_strcat(join, strs, sep, size);
	return (join);
}

int	main()
{	
	char	*strs[] = {"Hello", "Hola", "Bonjour"};
	char	sep[] = " ,";
	int	size;

	size = 3;
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}
