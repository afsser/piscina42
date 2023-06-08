/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:25:21 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:19:35 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

// bubble sort
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	aux;

	aux = 0;
	while (aux <= size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i +1];
				tab[i + 1] = temp;
			}
			i++;
		}
		aux++;
	}
}

int	main(void)
{
	int	size;
	int	*tab;
	int	base_do_array[9] = {5, 8, 12, 0, 5565, 66, 9, 12, 100};
	int	i;

	size = 9;
	tab = &base_do_array[0];
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
