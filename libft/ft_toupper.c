/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:16:16 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 18:42:46 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

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