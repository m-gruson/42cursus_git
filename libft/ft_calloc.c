/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:36:52 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/12 11:45:20 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_bzero(void *s, size_t n)
{
   int  i;

   i = 0;
   while(i != n)
   {
       *(char*)s++ = '\0';
       i++;
   }
    return ((char*)s); 
}

void    *ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}

