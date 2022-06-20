/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:46:15 by mgruson           #+#    #+#             */
/*   Updated: 2022/03/21 16:28:35 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *src, int *dst)
{
	int	swap;

	swap = *src;
	*src = *dst;
	*dst = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	compare;
	int	comparante;

	compare = 0;
	comparante = 0;
	while (compare < size)
	{	
		comparante = compare + 1;
		while (comparante < size)
		{
			if (tab[compare] > tab[comparante])
			{
				ft_swap(&tab[compare], &tab[comparante]);
			}
			comparante++;
		}
		compare++;
	}
}

int main()
{
	int	 tab[6] = {6, 5, 4, 3, 8, 1};


	ft_sort_int_tab(tab, 6);
	return 0;
}
