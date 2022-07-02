/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/07/02 20:19:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_end_line(char *work_line)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (!work_line)
		return (free(work_line), NULL);
	while (work_line[i] && work_line[i] != '\n')
		i++;
	i++;
	tmp = ft_calloc(sizeof(char), (ft_strlen(work_line) - i + 1));
	if (!tmp)
		return (free(work_line), NULL);
	while (work_line[i-1])
		tmp[j++] = work_line[i++];
	return (free(work_line), tmp);
}

char	*get_print_line(char *src)
{
	size_t	i;
	char	*tmp;
	
	i = 0;
	if (!src || ft_strlen(src) == 0)
		return (NULL);
	while(src[i] != '\n' && i < ft_strlen(src))
	{
		i++;
	}
	i++;
	tmp = malloc(sizeof(char) * (i + 1));
	tmp[i] = '\0';
	while(i > 0)
	{
		i--;
		tmp[i] = src[i];
	}
	return (tmp);
}

char *get_work_line(int	fd, char *work_line)
{
	char 	*buf;
	size_t	buflen;

	buflen = 1;
	buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
	{
		return (NULL);
	}
	while(!ft_memchr(work_line, '\n', (ft_strlen(work_line))) && buflen != 0)
	{
		buflen = read(fd, buf, (BUFFER_SIZE));
		if (buflen < ft_strlen(buf) || buflen == 0 )
			buf[buflen] = '\0';
		work_line = ft_strjoin(work_line, buf);
	}
	return(free(buf), work_line);
	
}

char *get_next_line(int fd)
{
	static char	*work_line;
	char		*print_line;
	
	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	if (!work_line)
		work_line = NULL;
	work_line = get_work_line(fd, work_line);
	print_line = get_print_line(work_line);
	work_line = get_end_line(work_line);
	return(print_line);
}

// int main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = 0;
// 	fd = open("text.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf(" 1 : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf(" 2 : %s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf(" 3 : %s", line);
// 	free(line);
// 	close(fd);
// 	return (0);
// } 