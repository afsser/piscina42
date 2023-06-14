/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:25:47 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 14:06:20 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 13;
// 	int	b = 2;
// 	int val_div = 0;
// 	int val_mod = 0;
// 	int	*div = &val_div;
// 	int	*mod = &val_mod;

// 	ft_div_mod(a, b, div, mod);
// 	printf("divisao da: %d\n", *div);
// 	printf("dividendo da: %d\n", *mod);
// }
