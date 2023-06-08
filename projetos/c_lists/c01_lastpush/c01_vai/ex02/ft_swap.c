/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:22:13 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:56:44 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	valor_a;
// 	int	valor_b;

// 	valor_a = 404;
// 	valor_b = 666;
// 	a = &valor_a;
// 	b = &valor_b;
// 	ft_swap(a, b);
// 	printf("valor de A: %d\n", *a);
// 	printf("valor de B: %d\n", *b);
// }
