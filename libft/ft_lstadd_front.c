/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieug <mathieug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:13:50 by mathieug          #+#    #+#             */
/*   Updated: 2022/05/19 18:37:42 by mathieug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}


int main()
{
    t_list  **lst;
	lst = ft_lstadd_front(lst, "boss");
	printf("%s\n", (char *)(*lst).content);
	return 0;
}
