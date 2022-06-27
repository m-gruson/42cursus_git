/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_vf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:45:04 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/27 19:50:50 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	orchestrator(char *str, int j, int i);
void	single_digit(char *str, int j, int i);
void	big_digit(int j);
void	tens_digit(char *str, int i, int j);
void	double_digit(char *str, int i);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_converter(char *str)
{
	int	j;
	int	i;

	i = 0;
	while (str[i] == '0')
		i++;
	j = ft_strlen(&str[i]);
	orchestrator(str, j, i);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_converter(argv[1]);
	return (0);
}
