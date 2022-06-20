/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2learn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:02:38 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/26 15:11:49 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		if( str[i] == ':')
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}


int	main(int argc, char **argv)
{
	int	fd1;
	int	n;
	int	i;
	int	di;
	int 	l_dict;
	char 	**str; 

	char	dict[691];
	n = 0;
	di = 0;

	fd1 = open("numbers.dict", O_RDONLY );
	read(fd1, dict, 691);

	l_dict = ft_strlen(dict);


//	printf("%s\n", dict);
//	write(1, &dict, 1);

	str = malloc(l_dict * sizeof(char *)); //permet de creer le tableau principal pour mettre les chiffres
//	printf("%d\n", l_dict);

        int k;
        int j;
        k = 0;

    while(n <= l_dict)
    {
        i = 0; 
        while(dict[di] != '\n')
        {
            i++;
            di++;
        }
        j = i;

        str[n] = malloc(sizeof(char) * i);

        while ( k != i)
        {
        str[n][k] = dict[di - j];
        j--;
		k++;
        }
        printf("%s\n", str[n]);
		write(1, "\n" , 1);
        k = 0;
        di++;
        n++;
        
    }


	close(fd1);


	return 0;
}	
