/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:09:32 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/23 11:31:44 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while(*lst != NULL)
    {

        tmp = (*lst).next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
    }
    lst = NULL;
}