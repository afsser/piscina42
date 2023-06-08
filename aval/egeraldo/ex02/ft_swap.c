/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:23:06 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:02:41 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	valor_a;
	int	valor_b;

	valor_a = 404;
	valor_b = 666;
	a = &valor_a;
	b = &valor_b;
	ft_swap(a, b);
	printf("valor de A: %d\n", *a);
	printf("valor de B: %d\n", *b);
}
