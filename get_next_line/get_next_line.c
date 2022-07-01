/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:41:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/07/01 17:37:35 by mgruson          ###   ########.fr       */
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
	while (work_line[i] && work_line[i] != '\n')
		i++;
	i++;
	tmp = malloc(sizeof(char) * (ft_strlen(work_line) - i + 1));
	if (!tmp)
		return (0);
	while (work_line[i])
		tmp[j++] = work_line[++i];
	tmp[j] = '\0';
	// free(work_line);
	return (tmp);
}

char	*get_clean_line(char *src)
{
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	while(src[i] != '\n' && i < ft_strlen(src))
	{
		i++;
	}
	i++;
	while(i < ft_strlen(src))
	{
		src[i] = '\0';
		i++;
	}
	return (src);
}

char *get_work_line(int	fd, char *work_line)
{
	char *buf;
	char *tmp;
	int	buflen;

	buf = ft_calloc(sizeof(char) * (BUFFER_SIZE + 1));
	while(!ft_memchr(work_line, '\n', (ft_strlen(work_line) - 1)))
	{
		buflen = read(fd, buf, (BUFFER_SIZE + 1));
		if (buflen == 0)
		{
			free(buf);
			buf = NULL;
		}
		tmp = ft_strjoin(work_line, buf);
		// free(work_line);
		work_line = tmp;
	}
	return(work_line);
	
}

char *get_next_line(int fd)
{
	char static	*work_line;
	char		*print_line;
	
	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	if (!work_line)
		work_line = NULL;
		
	work_line = get_work_line(fd, work_line);
	print_line = get_clean_line(work_line);
	work_line = get_end_line(work_line);
	return(print_line);
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