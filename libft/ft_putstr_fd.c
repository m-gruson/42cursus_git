/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:48:49 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:30:42 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
}

int main()
{
    char *s;

    s = "mathieu";
    ft_putstr_fd(s, 1);
    return (0);
}