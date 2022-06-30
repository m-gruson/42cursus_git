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
	return ((char *) p);
}

char	*clean_line(char *src)
{
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	while(src[i] != '\n' && src[i])
	{
		i++;
	}
	return (src);
}

char	*end_line(char *src)
{
	size_t	i;
	int		l;
	char *dest;
    size_t bob;

	i = 0;
	l = 0;
	if(!src)
		return (NULL);
	dest = ft_calloc((ft_strlen(src) + 1), sizeof(char));
	while(src[i] != '\n' && src[i])
	{
		i++;
	}
	i++;
    bob = ft_strlen(src);
    while(i < bob)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2, int buflen)
{
	int		i;
	int		l;
	char	*s3;

	i = 0;
	l = 0;
    if (buflen == 0)
    {
        return (s1);
    }
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
	while (s2 && s2[i])
		s3[l++] = s2[i++];
	return (s3);
}

int	ft_memchr(char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
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

char *get_next_line(int fd)
{
	char *buf;
	char *line;
	static char *next_line;
	int	buflen;
	
	buflen = 1;
	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if(!next_line)
		next_line = NULL;
	line = next_line;
	buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buf)
		return (NULL);
	if(!ft_memchr(next_line, '\n', (ft_strlen(next_line)))) // pour éviter de rentrer qd on a deja un saut à la ligne qd on rappel
	{
		while(!ft_memchr(buf, '\n', (BUFFER_SIZE)) && buflen != 0)
		{
				buflen = read(fd, buf, BUFFER_SIZE);
				buf[BUFFER_SIZE] = '\0';
				line = ft_strjoin(line, buf, buflen);
		}
	}
	next_line = end_line(line);
	line = clean_line(line);
	free(buf);
	return (line);
}

int main(void)
{
	int		fd;
	char	*line;

	fd = 0;
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("1 : %s", line);
	line = get_next_line(fd);
	printf("1 : %s", line);
	line = get_next_line(fd);
	printf("1 : %s", line);
	close(fd);
	return (0);
} 