/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:11:56 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/20 20:06:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    int i;

    i = 0;
    while((*lst).next)
    {
        lst = (*lst).next;
    }
   return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new) // ** car seul un double pointeur peu recevoir l'adresse d'un pointeur cest logique
{
    /* ici on ne cree pas le node on le relie seulement, le block a ete cree avant */
    
    t_list  *tmp;
    tmp = ft_lstlast(*lst); // ici on met le dernier element dans tmp normal 
    (*tmp).next = new; // pour pouvoir lui mettre l adresse du content new alors que l adresse etait nulle avant.
}  

int    ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst)
    {
        printf("%s\n", (char *)(*lst).content);
        lst = (*lst).next;
        i++;
    }
   return (i);
}


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
    t_list  *lst;
	t_list	*new;

    lst = NULL;
	new = NULL;
    lst = add_link(lst, "tot");
    new = add_link(new, "tat");
    lst = add_link(lst, "tut");
	ft_lstadd_back(&lst, new);
    printf("%d\n", ft_lstsize(lst));

    return (0);
}