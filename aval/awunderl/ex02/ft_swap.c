/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:38:14 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:09:40 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int	ai;
// 	int	bi;
// 	int	*a;
// 	int	*b;

// 	ai = '1';
// 	bi = '2';
// 	a = ai;
// 	b = bi;
// 	ft_swap(a, b);
// 	write(1, &a, 2);
// 	write(1, &"\n", 1);
// 	write(1, &b, 2);
// 	write(1, &"\n", 1);
// }

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
