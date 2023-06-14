/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:08:42 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:06:40 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

#include <stdio.h>

int	main(void)
{
	int	a = 13;
	int	b = 2;
	int val_div = 0;
	int val_mod = 0;
	int	*div = &val_div;
	int	*mod = &val_mod;

	ft_div_mod(a, b, div, mod);
	printf("divisao da: %d\n", *div);
	printf("dividendo da: %d\n", *mod);
}