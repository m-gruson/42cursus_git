/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:04:39 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/29 12:54:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (-1);
		while (min < max)
		{
			tab[i++] = min;
			min++;
		}
		*range = tab;
		return (i);
	}
	range = NULL;
	return (0);
}

int main()
{
        int     *tab;
        int     i;
        int     min;
        int     max;

        min = -4;
        max = 8;
        i = 0;

        printf("%d\n", ft_ultimate_range(&tab, min, max));
        while(tab[i] < max)
        {
                printf("%d ", tab[i]);
                i++;
        }
        return (0);
        
}

