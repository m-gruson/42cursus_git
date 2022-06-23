/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:21:43 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 21:08:36 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mode(int *a, int *b)
{
	int	c;
	
	c = *a;

	*a = *a / *b;
	*b = c % *b;	
}

int main()
{
	int a;
	int b;
	
	a = 21;
	b = 5;

	ft_ultimate_div_mode(&a, &b);
	printf("%d, %d", a, b);
	return 0;
}
