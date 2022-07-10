/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:06:12 by ilandols          #+#    #+#             */
/*   Updated: 2022/07/10 17:45:44 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stddef.h>

char	*get_next_line(int fd);
int		ft_strchr_gnl(char *s, int c);
void	remove_last_line(char *buffer);
int		is_end_of_line(char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	get_line(char *line, char *buffer);

# ifndef BUFFER_SIZE
# define BUFFER_SIZE		1
# endif

#endif
