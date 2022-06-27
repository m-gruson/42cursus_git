/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:19:47 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/29 10:45:24 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char	*dest;
	int	l;
	int	i;

	l = ft_strlen(src);
	i = 0;
	dest = malloc( l + 1 * sizeof(char));
	if(!dest)
		return (NULL);
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
/* 
int main()
{
	char	src[] = "hello";

	printf("%s\n", ft_strdup(src));
	return 0;
}*/

