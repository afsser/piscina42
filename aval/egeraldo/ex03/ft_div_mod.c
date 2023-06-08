/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:30:44 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:05:34 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


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
	printf("resto da: %d\n", *mod);
}
