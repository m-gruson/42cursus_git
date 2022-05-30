/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:14 by mgruson           #+#    #+#             */
/*   Updated: 2022/05/17 12:48:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tab(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			i++;
		}
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

void	ft_taboftab(char const *s, char c, char **s1)
{
	int	i;
	int	count;
	int	t;

	i = 0;
	count = 0;
	t = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			count++;
		}
		if (count != 0)
			s1[t] = (char *)ft_calloc((count + 1), sizeof(char));
		t++;
		count = 0;
	}
}

char	**ft_fill(char const *s, char c, char **s1)
{
	int	l;
	int	i;
	int	t;

	l = 0;
	i = 0;
	t = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			s1[t][l++] = s[i++];
		if (s1[t])
			s1[t++][l] = '\0';
		l = 0;
	}
	s1[t] = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;

	if (!s)
		return (NULL);
	s1 = (char **)ft_calloc((ft_tab(s, c) + 1), sizeof(char *));
	if (!s1)
		return (NULL);
	ft_taboftab(s, c, s1);
	ft_fill(s, c, s1);
	return (s1);
}

// int main()
// {
// 	char	**tabstr;
// 	int		i;

// 	i = 0;
// 	if (!(tabstr = ft_split("lorem ipsnon risus. Suspendisse", ' ')))
// 		printf("NULL");
// 	else
// 	{
// 		while (tabstr[i])
// 		{
// 			printf("%s\n", tabstr[i]);
// 			write(1, "\n", 1);
// 			i++;
// 		}
// 	}
// }