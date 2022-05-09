/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:51:16 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 19:00:48 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int   ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    else
        return (c);
}

int main()
{
    printf("%d\n", ft_tolower('B'));
    printf("%d\n", tolower('B'));
}