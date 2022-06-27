/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:11:22 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/15 19:38:29 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ecritator(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0' ;
	while (a <= '7')
	{
		
		while (b <= '8')
		{
			
			while (c <= '9')
			{
				ft_ecritator(a, b, c);
				c++;
			}		
			b++;
		}
		a++;
	}	
}

int main()
{
	ft_print_comb();
	return 0;
}
