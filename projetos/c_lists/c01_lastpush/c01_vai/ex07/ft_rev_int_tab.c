/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 23:26:11 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:50:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	size;
// 	int	*tab;
// 	int	base_do_array[9] = {1, 22, 333, 4444, 55555, 66666, 7777, 888, 99};
// 	int	i;

// 	size = 10;
// 	tab = &base_do_array[0];
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("\n%d", tab[i]);
// 		i++;
// 	}
// }
