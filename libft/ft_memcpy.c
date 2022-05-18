/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:06:30 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/18 13:37:32 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;
    while(i != n)
    {
        *(char *)dest++ = *(char *)src++;
        i++;
    }
    return ((char*)dest);
}

/*
int main()
{
    char    dest[] = "b";
    char    src[10] =  "mathieu";

    char    dest1[] = "b";
    char    src1[10] =  "mathieu";

    printf("Before dest = %s, src = %s\n", dest, src);
    memcpy(dest, src, 3);
    printf("After dest = %s, src = %s\n", dest, src);

    printf("Before dest = %s, src = %s\n", dest1, src1);
    memmove(dest1, src1, 3);
    printf("After dest = %s, src = %s\n", dest1, src1);

    return (0);
}*/