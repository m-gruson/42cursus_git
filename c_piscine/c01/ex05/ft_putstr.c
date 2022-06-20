/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:09:32 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 22:32:16 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str, int a)
{
	int i;
	i = 0;
	
	while(i <= a-1)
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int main()
{
	char tab [5] = "hello";
	
	ft_putstr(&tab[0], 5);
	return 0;
}

