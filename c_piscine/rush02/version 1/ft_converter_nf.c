/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                        :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:45:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/27 10:27:35 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return(i);
}

void	ft_converter(char *str)
{

	int	j;
	int	i;
	
	i = 0;
	while (str[i] == '0')
	{
		i++;
	}
	
	
	j = ft_strlen(&str[i]);
	
	
	
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			if (j % 3 == 0 && str[i] > '0' || j % 3 == 1 && str[i - 1] != '1')
			{
				if (str[i] == '1')
					printf("%s", "one ");
				if (str[i] == '2')
					printf("%s", "two ");
				if (str[i] == '3')
					printf("%s", "three ");
				if (str[i] == '4')
					printf("%s", "four ");
				if (str[i] == '5')
					printf("%s", "five ");
				if (str[i] == '6')
					printf("%s", "six ");
				if (str[i] == '7')
					printf("%s", "seven ");
				if (str[i] == '8')
					printf("%s", "eight ");
				if (str[i] == '9')
					printf("%s", "nine ");
				if (j % 3 == 0 && str[i] > '0')
					printf("%s", "hundred "); 
			}
			if (j % 3 == 1 && ((str[i] != '0') || (str[i - 1] != '0') || (str[i - 2] != '0' )))
			{
				if (j / 3 == 1)
					printf("%s", "thousand ");
				if (j / 3 == 2)
					printf("%s", "million ");
				if (j / 3 == 3)
					printf("%s", "billion ");
				if (j / 3 == 4)
					printf("%s", "trillion ");
				if (j / 3 == 5)
					printf("%s", "quadrillion ");
				if (j / 3 == 6)
					printf("%s", "quintillion ");
				if (j / 3 == 7)
					printf("%s", "sextillion ");
				if (j / 3 == 8)
					printf("%s", "septillion ");
				if (j / 3 == 9)
					printf("%s", "octillion ");
				if (j / 3 == 10)
					printf("%s", "nonillion ");
				if (j / 3 == 11)
					printf("%s", "septillion ");
				if (j / 3 == 12)
					printf("%s", "undecillion ");
			}		
			if (j % 3 == 2)
			{
				if (str[i] == '1')
				{
					if (str[i + 1] == '0')
						printf ("%s", "ten ");
					if (str[i + 1] == '1')
						printf ("%s", "eleven ");
					if (str[i + 1] == '2')
						printf ("%s", "twelve ");
					if (str[i + 1] == '3')
						printf ("%s", "thirteen ");
					if (str[i + 1] == '4')
						printf ("%s", "fourteen ");
					if (str[i + 1] == '5')
						printf ("%s", "fifteen ");
					if (str[i + 1] == '6')
						printf ("%s", "sixteen ");
					if (str[i + 1] == '7')
						printf ("%s", "seventeen ");
					if (str[i + 1] == '8')
						printf ("%s", "eighteen ");
					if (str[i + 1] == '9')
						printf ("%s", "nineteen ");
					if (j / 3 == 0)
						break;
				}
				if (str[i] == '2')
					 printf ("%s", "twenty ");
				if (str[i] == '3')
					 printf ("%s", "thirty ");
				if (str[i] == '4')
					 printf ("%s", "fourty ");
				if (str[i] == '5')
					 printf ("%s", "fifty ");
				if (str[i] == '6')
					 printf ("%s", "sixty ");
				if (str[i] == '7')
					 printf ("%s", "seventy ");
				if (str[i] == '8')
					 printf ("%s", "eighty ");
				if (str[i] == '9')
					 printf ("%s", "ninety ");	
			}		
		}
	
		
		i++;
		j--;
	}
}


int main(int argc, char **argv)
{	
	
	ft_converter(argv[1]);
	return 0;
	
}

/*			if (j-1 = 0)
				print ten
			if(j-1 = 1)
				print tab[2][i]
			etc jusqua 9
		if(j % 3 = 0)
			if (j / 3 = 1)
				print ten
			if (j / 3 = 2)
				print hundred
			etc jusqua undecillion


	if(str[i] == '2')
 	{
		
	}		

	i % 3 == 1i
*/
