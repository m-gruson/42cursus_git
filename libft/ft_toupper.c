/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:16:16 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:26:24 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int   ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    else
        return (c);
}


int main()
{
    printf("%d\n",ft_toupper(' '));
    printf("%d\n",toupper(' '));
}