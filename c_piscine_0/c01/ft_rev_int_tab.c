/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:18:35 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/17 09:29:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void ft_rev_int_tab(char *tab, int size)
{
	int i;
	int stock_size;
	char swap;	

	stock_size = size;
	i = 0;

	while(i < size)
	{	
		swap = tab[i];
		tab[i] = tab[size-1];
		tab[size-1] = swap;	
		i++;
		size--;
	}
	
	i = 0;

	while(i <= stocki _size-1)
	{
		printf("%c", tab[i]);
		i++;
	}

}

int main()
{
	char	tab[] = "hello";

	ft_rev_int_tab(tab, 6);
	return 0;
}
