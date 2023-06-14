/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 02:25:50 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:05:42 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

#include <stdio.h>

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
