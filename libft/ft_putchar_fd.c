/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:40:38 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:30:51 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


int main ()
{
    char let;
    char *letter ;
    
    letter = &let;
    let = 'M'; 
    ft_putchar_fd(let, 1); // marche aussi avec pointeur *letter; // le chiffre a droite c'est le meme concept que ds putstr
    return(0);
}
