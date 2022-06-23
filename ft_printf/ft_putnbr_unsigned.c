/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:58:41 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/23 22:11:52 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
	}
	nb = nb % 10;
	nb = nb + '0';
	write(1, &nb, 1);
}