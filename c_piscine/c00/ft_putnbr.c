/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:58:58 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 12:51:56 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		ft_putnbr(c % 10);
	}
	if (c < 9)
		ft_putchar(c + '0');
}

int main()
{
	ft_putnbr(7546985);
	return 0;
}
