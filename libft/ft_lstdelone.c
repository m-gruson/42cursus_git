/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:01:38 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/23 11:07:48 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    del(void*)
{
    free(void)
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst);
    free(lst);
    lst = NULL;
}