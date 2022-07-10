/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:05:03 by ilandols          #+#    #+#             */
/*   Updated: 2022/07/10 17:39:55 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			size_read;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	line = ft_strjoin_gnl(line, buffer);
	size_read = BUFFER_SIZE;
	while (!(is_end_of_line(line) || size_read != BUFFER_SIZE))
	{
		size_read = read(fd, buffer, BUFFER_SIZE);
		if (size_read < 0)
			return (NULL);
		buffer[size_read] = '\0';
		line = ft_strjoin_gnl(line, buffer);
	}
	if (!line[0])
	{
		free(line);
		return (NULL);
	}
	else
		get_line(line, buffer);
	return (line);
}

int main(void)
{
	int		fd;
	char	*line;

	fd = 0;
	fd = open("test", O_RDONLY);
	line = get_next_line(fd);
	printf(" 1 : %s", line);
	free(line);
	line = get_next_line(fd);
	printf(" 2 : %s", line);
	free(line);

	close(fd);
	return (0);
} 
