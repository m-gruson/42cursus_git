/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:36:52 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/18 15:40:48 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmeb);
	return (ptr);
}

