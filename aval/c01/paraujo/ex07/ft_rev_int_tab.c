/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:10:01 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:11:51 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//recebe um array de int
//o argumento é um *int e a quantidade de int é um array
//recebe -> inverte.
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	input;

	i = 0;
	while (i < size / 2)
	{	
		input = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = input;
		i++;
	}
}

int	main(void)
{
	int	size;
	int	array[5] = {0, 1, 2, 3, 4};
	int	i;

	i = 0;
	size = 5;
	ft_rev_int_tab(array, size);
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
