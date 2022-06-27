/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:33:54 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/16 10:24:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i])
	{
		i++;		
	}

	return (i);

}

int main()
{
	char *str;
	str = "hello";

	printf("%d", ft_strlen(str));
	return 0;
}
