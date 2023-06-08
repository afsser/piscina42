/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:41:27 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:15:06 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

int	main(void)
{
	int	size;
	int	*tab;
	int	base_do_array[9] = {1, 22, 333, 4444, 55555, 66666, 7777, 888, 99};
	int	i;

	size = 9;
	tab = &base_do_array[0];
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}