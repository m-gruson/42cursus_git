/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:01 by mgruson           #+#    #+#             */
/*   Updated: 2022/06/24 18:40:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int a = 5454545;
	
	printf("\n%d\n", ft_putptr(a));
	printf("\n%d\n", printf("%d", a));
}