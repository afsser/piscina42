/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:32:10 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:17:47 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

int	main(void)
{
	int	i;
	int	array[] = {1, 2, 3, 4, 5};

	i = 0;
	ft_rev_int_tab(array, 5);
	while (i < 5)
	{
		printf("%d, ", array[i]);
		i++;
	}
	return (0);
}
