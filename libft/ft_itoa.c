/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:50:17 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/17 13:28:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_itoa(int n)
{
    unsigned int c;
    int i;
    char *s;
    
    i = 0;
    c = n;
    
    while (c > 9 || c < -9)
    {
        c = c / 10;
        i++;
    }
    if (n < 0)
    {
       c = n * -1;
       s = (char *)malloc((i + 2)*sizeof(char)); 
       s[i++] = '-';
    }
    if (n > 0)
    {
        s = (char *)malloc((i + 1)*sizeof(char));
        c = n;
    
    if (c > 9)
        ft_itoa(c / 10);
    
    s[i++] = c;
    
        
    return (s);
}

int main()
{
    int a;
    
    a = 5648724;
    ft_itoa(a);
    return 0;
}