/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:52:42 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:13:07 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 12;
	b = 10;
	ptra = &a;
	ptrb = &b;
	ft_ultimate_div_mod(ptra, ptrb);
	printf("resultado: %d \n", a);
	printf("sobra: %d \n", b);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = (div / mod);
	*b = (div % mod);
}

// void	ft_ultimate_div_mod(int *a, int *b)
// {
// 	int	div;
// 	int	mod;

// 	div = (div / mod);
// 	mod = (div % mod);
// 	*a = div;
// 	*b = mod;
// }