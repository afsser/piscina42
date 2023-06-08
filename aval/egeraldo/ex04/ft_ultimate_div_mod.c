/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:42:18 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:06:35 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	valor_a = 52;
	int	valor_b = 5;

	a = &valor_a;
	b = &valor_b;
	ft_ultimate_div_mod(a, b);
	printf("tem que dar 10: %d\n", *a);
	printf("tem que dar 2: %d\n", *b);
}
