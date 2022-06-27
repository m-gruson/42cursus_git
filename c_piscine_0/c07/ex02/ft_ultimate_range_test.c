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

int     ft_ultimate_range(int **range, int min, int max)
{
        int     l;
        int     i;

        l = max - min;
        i = 0;
        *range = malloc(l * sizeof(int));
        if(!range)
                return(-1);
        if(min >= max)
                return(0);
        while(min < max)
        {
                (*range)[i] = min;
                min++;
                i++;
        }
        return(i);

}

int main()
{
        int     *tab;
        int     i;
        int     min;
        int     max;

        i = 0;
        min = -4;
        max = 8;

        printf("%d\n", ft_ultimate_range(&tab, min, max));
        while(tab[i] < 8 )
        {
                printf("%d", tab[i]);
                i++;
        }
        return (0);
}

