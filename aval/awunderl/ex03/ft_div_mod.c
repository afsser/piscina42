/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:01:21 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:10:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptra;
	int	*ptrb;

	a = 8;
	b = 3;
	ptra = &div;
	ptrb = &mod;
	ft_div_mod(a, b, ptra, ptrb);
	printf("resultado: %d \n", div);
	printf("sobra: %d \n", mod);
}
