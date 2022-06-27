/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:06:46 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/27 19:51:35 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	single_digit(char *str, int j, int i)
{
	if (str[i] == '1')
		write(1, "one ", 4);
	if (str[i] == '2')
		write(1, "two ", 4);
	if (str[i] == '3')
		write(1, "three ", 6);
	if (str[i] == '4')
		write(1, "four ", 5);
	if (str[i] == '5')
		write(1, "five ", 5);
	if (str[i] == '6')
		write(1, "six ", 4);
	if (str[i] == '7')
		write(1, "seven ", 6);
	if (str[i] == '8')
		write(1, "eight ", 6);
	if (str[i] == '9')
		write(1, "nine ", 5);
	if (j % 3 == 0 && str[i] > '0')
		write(1, "hundred ", 8);
}

void	big_digit(int j)
{
	if (j / 3 == 1)
		write(1, "thousand ", 9);
	if (j / 3 == 2)
		write(1, "million ", 8);
	if (j / 3 == 3)
		write(1, "billion ", 8);
	if (j / 3 == 4)
		write(1, "trillion ", 9);
	if (j / 3 == 5)
		write(1, "quadrillion ", 12);
	if (j / 3 == 6)
		write(1, "quintillion ", 12);
	if (j / 3 == 7)
		write(1, "sextillion ", 11);
	if (j / 3 == 8)
		write(1, "septillion ", 11);
	if (j / 3 == 9)
		write(1, "octillion ", 10);
	if (j / 3 == 10)
		write(1, "nonillion ", 10);
	if (j / 3 == 11)
		write(1, "decillion ", 10);
	if (j / 3 == 12)
		write(1, "undecillion ", 12);
}

void	tens_digit(char *str, int i, int j)
{
	if (j / 3 == 0)
		write(1, "and ", 4);
	if (str[i + 1] == '0')
		write(1, "ten ", 4);
	if (str[i + 1] == '1')
		write(1, "eleven ", 7);
	if (str[i + 1] == '2')
		write(1, "twelve ", 7);
	if (str[i + 1] == '3')
		write(1, "thirteen ", 9);
	if (str[i + 1] == '4')
		write(1, "fourteen ", 9);
	if (str[i + 1] == '5')
		write(1, "fifteen ", 8);
	if (str[i + 1] == '6')
		write(1, "sixteen ", 8);
	if (str[i + 1] == '7')
		write(1, "seventeen ", 10);
	if (str[i + 1] == '8')
		write(1, "eighteen ", 9);
	if (str[i + 1] == '9')
		write(1, "nineteen ", 9);
}

void	double_digit(char *str, int i)
{
	if (str[i] == '2')
		write(1, "twenty ", 7);
	if (str[i] == '3')
		write(1, "thirty ", 7);
	if (str[i] == '4')
		write(1, "fourty ", 7);
	if (str[i] == '5')
		write(1, "fifty ", 6);
	if (str[i] == '6')
		write(1, "sixty ", 6);
	if (str[i] == '7')
		write(1, "seventy ", 8);
	if (str[i] == '8')
		write(1, "eighty ", 7);
	if (str[i] == '9')
		write(1, "ninety ", 7);
}

void	orchestrator(char *str, int j, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if ((j % 3 == 0 && str[i] > '0') || (j % 3 == 1
					&& str[i - 1] != '1'))
				single_digit(str, j, i);
			if (j % 3 == 1 && ((str[i] != '0') || (str[i - 1] != '0')
					|| (str[i - 2] != '0' )))
				big_digit(j);
			if (j % 3 == 2)
			{
				if (str[i] == '1')
				{
					tens_digit(str, i, j);
					if (j / 3 == 0)
						break ;
				}
				double_digit(str, i);
			}		
		}
		i++;
		j--;
	}
}
