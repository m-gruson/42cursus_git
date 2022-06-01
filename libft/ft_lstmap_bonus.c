/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:40:09 by mathieug          #+#    #+#             */
/*   Updated: 2022/06/01 16:09:34 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*tmp;

// 	if (!lst || !new)
// 		return ;
// 	tmp = *lst;
// 	if (!tmp)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	while ((*tmp).next)
// 		tmp = (*tmp).next;
// 	(*tmp).next = new;
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = (t_list *)malloc(sizeof(t_list));
// 	if (new)
// 	{
// 		(*new).content = (char *)content;
// 		(*new).next = NULL;
// 	}
// 	return (new);
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void*))
// {
// 	del((*lst).content);
// 	free(lst);
// }

// static void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*tmp;

// 	while (*lst)
// 	{
// 		tmp = (**lst).next;
// 		ft_lstdelone((*lst), del);
// 		*lst = tmp;
// 	}
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	tmp = NULL;
	while (lst)
	{
		new = ft_lstnew(f((*lst).content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = (*lst).next;
	}
	return (tmp);
}
