/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:43:51 by mathieug          #+#    #+#             */
/*   Updated: 2022/07/02 21:29:12 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	int		l;
	char	*s3;

	i = 0;
	l = 0;
	if ((!s1 && !s2) || ft_strlen(s1) + ft_strlen(s2) == 0)
		return(free(s1), NULL);
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (free(s1), NULL);
	while (s1 && s1[i])
	{
		s3[l] = s1[i];
		i++;
		l++;
	}
	s3[l] = '\0';
	i = 0;
	while (s2 && s2[i])
		s3[l++] = s2[i++];
	s3[l] = '\0';
	return (free(s1), s3);
}

int	ft_memchr(char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || !s)
		return (0);
	while (i < n && s[i])
	{
		if (((char unsigned *)s)[i] == (unsigned char)c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	if (nmemb && ((nmemb * size / nmemb) != size))
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	i = 0;
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return ((char *) p);
}
