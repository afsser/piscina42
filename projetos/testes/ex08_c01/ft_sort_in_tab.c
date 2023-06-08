/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:48:44 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:27:44 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;
	int	temp1;
	int	temp2;
	int check;

	check = 0;
	i = 0;
	j = 1;
	x = 0;
	while (x < size)
	{
		while (j < size - 1)
		{
			if (tab[i] > tab[j])
			{
				i++;
			}
			else if (tab[i] < tab[j])
			{
				j++;
			}
		}
		temp1 = tab[i];
		temp2 = tab[x];
		tab[x] = temp1;
		tab[i] = temp2;
		x++;
		i = x + 1;
	}
}

int	main(void)
{
	int	size;
	int	*tab;
	int	base_do_array[10] = {3, 8, 5, 1, 9, 2, 0, 4, 6, 7};
	int	a;

	size = 10;
	tab = &base_do_array[0];
	ft_sort_int_tab(tab, size);
	a = 0;
	while (a < size)
	{
		printf("\n%d", tab[a]);
		a++;
	}
}
