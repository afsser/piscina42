/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:50:28 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:56:33 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	valor_a = 52;
// 	int	valor_b = 5;

// 	a = &valor_a;
// 	b = &valor_b;
// 	ft_ultimate_div_mod(a, b);
// 	printf("tem que dar 10: %d\n", *a);
// 	printf("tem que dar 2: %d\n", *b);
// }
