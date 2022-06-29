/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:53:45 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/29 18:06:37 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
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
	return (p);
}

char	*clean_line(char *src)
{
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	while(src[i] != '\n')
	{
		i++;
	}
	i++;
	while(src[i])
		src[i] = '\0';
	return (src);
}

char	*rest_line(char *src)
{
	size_t	i;
	int		l;
	char *dest;

	i = 0;
	l = 0;
	if(!src)
		return (NULL);
	dest = ft_calloc(sizeof(char), (ft_strlen(src) + 1));
	while(src[i] != '\n')
	{
		i++;
	}
	i++;
	while(src[i] != '\0')
	{
		 dest[l] = src[i];
		 i++;
		 l++;
	}
	while(dest[l] != '\0')
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}



char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*s3;
	i = 0;
	l = 0;

	s3 = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!s3)
		return (NULL);
	while (s1 && s1[i])
	{
		s3[l] = s1[i];
		i++;
		l++;
	}
	i = 0;
	while (s2[i])
		s3[l++] = s2[i++];
	s3[l] = '\0';
	return (s3);
}

void	*ft_memchr(char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char unsigned *)s)[i] == (unsigned char)c)
		{
			return ((char unsigned *)s + i);
		}
		i++;
	}
	return (NULL);
}

char *get_next_line(int fd)
{

	int buflen;
	char *buf;
	char *line;
	static char *next_line;
	
	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if(!next_line)
		next_line = NULL;
	buflen = 0;
	line = next_line;
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	if(!ft_memchr(next_line, '\n', (ft_strlen(next_line))))
	{
		while(!ft_memchr(buf, '\n', (BUFFER_SIZE + 1)))
		{
				buflen = read(fd, buf, BUFFER_SIZE);
				buf[buflen] = '\0';
				line = ft_strjoin(line, buf);
		}
	}
	next_line = rest_line(line);
	line = clean_line(line);
	
	free(buf);
	return (line);
}		


int main()
{
	int		fd;
	char	*line;

	fd = 0;
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("1 : %s\n", line);
	line = get_next_line(fd);
	printf("1 : %s\n", line);
	line = get_next_line(fd);
	printf("1 : %s\n", line);		
	close(fd);
	return (0);
} 