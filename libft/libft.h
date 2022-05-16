/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:43:27 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/16 18:32:11 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>
#include<stdio.h>

int ft_atoi(const char *str);
void    *ft_calloc(size_t nmeb, size_t size);
char    *ft_bzero(void *s, size_t n);
size_t    ft_strlen(const char *str);
char    *ft_strchr(const char *s, int c);

#endif 