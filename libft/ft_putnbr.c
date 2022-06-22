/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:28:29 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/22 18:29:08 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	c;

	c = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		c = -nb;
	}
	if (c > 9)
	{
		ft_putnbr(c / 10);
	}
	c = c % 10;
	c = c + '0';
	write(1, &c, 1);
}
