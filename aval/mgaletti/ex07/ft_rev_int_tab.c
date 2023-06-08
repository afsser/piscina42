/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:42:52 by mgaletti          #+#    #+#             */
/*   Updated: 2023/06/06 18:24:48 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size -1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size = 5;

	ft_rev_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
	return(0);
}