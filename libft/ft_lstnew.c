/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:26:03 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/19 18:33:12 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		(*new).content = (char *) content;
		(*new).next = NULL;
	}
	return (new);
}


int main()
{
	t_list	*list;
	list = ft_lstnew("boss");
	printf("%s\n", (char *)(*list).content);
	return 0;
}
