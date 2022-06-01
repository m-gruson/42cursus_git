/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:43:18 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/01 19:29:09 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = (*lst).next;
		i++;
	}
	return (i);
}

/*
t_list *add_link(t_list *list, char *content)
{
    t_list  *tmp;

    tmp = malloc(sizeof(t_list));
    if (tmp)
    {
        (*tmp).content = content; 
        (*tmp).next = list; 
    }
    return (tmp);
}

int main()
{
    t_list  *list;

    list = NULL;
    list = add_link(list, "tot");
    list = add_link(list, "tat");
    list = add_link(list, "tut");
    printf("%d\n", ft_lstsize(list));

    return (0);
}*/