/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:59:52 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/09 21:48:17 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int isign;
    int sign;
    int nb;

    i = 0;
    isign = 0;
    sign = 1;
    nb = 0;
    while(str[i] == ' ')
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
        if (isign > 0)
            return (0);
        isign++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - 48;
        i++;
    }
    return (sign * nb);
}


// int main(int argc, char **argv)
// {
//     printf("%d\n", ft_atoi(argv[1]));
//     printf("%d\n", atoi(argv[1]));
//     return (0);
// }