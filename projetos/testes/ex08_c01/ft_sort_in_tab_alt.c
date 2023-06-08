/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab_alt.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:32:03 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:47:07 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	mark;
	int	temp;
	int	sorted;

	count = 0;
	sorted = 0;
	while (count <= size -1 && !sorted)
	{
		sorted = 1;
		mark = 0;
		while (mark <= size - 1 - count)
		{
			if (tab[mark] > tab[mark + 1])
			{
				temp = tab[mark];
				tab[mark] = tab[mark + 1];
				tab[mark + 1] = temp;
				sorted = 0;
			}
			mark++;
		}
		count++;
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
