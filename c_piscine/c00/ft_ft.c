/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:06:14 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 17:50:11 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(char *nbr)
{
	*nbr = 'b';
}

int main()
{
	char	a;	

	ft_ft(&a);
	printf("%c", a);
	return 0;
}
