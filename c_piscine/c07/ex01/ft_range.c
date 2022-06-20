/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:15:31 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/29 11:20:55 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	l;
	int	*tab;
	int	i;

	l = max - min;
	i = 0;
	tab = malloc((l) * sizeof(int));
	if (!tab)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min = min + 1;
	}
	return (tab);
}
/*
int	main()
{
	int	min;
	int	max;
	int	i;
	
	min = -3;
	max = 6;
	i = min;
	ft_range(min, max);
	
	while (tab[i] < max) a mettre en haut
        {
                printf("%d", tab[i]);
                i++;
        }
	return (0);
}*/
