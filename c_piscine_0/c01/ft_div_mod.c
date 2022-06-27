/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:10 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 19:19:13 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int a;
	int b;

	a = 21;
	b = 5;

	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d, %d", div, mod);
	return 0;
}
