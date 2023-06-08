/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:14:29 by mgaletti          #+#    #+#             */
/*   Updated: 2023/06/06 18:21:43 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 22;
	b = 10;

	printf("Antes - %d\n", a);
	printf("Antes - %d\n", b);
	ft_ultimate_div_mod(&a,&b);
	printf("Depois - %d\n", a);
	printf("Depois - %d\n", b);
}