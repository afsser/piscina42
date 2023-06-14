/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:09:17 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:07:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int	a_int;
	int	b_int;
	int	*a;
	int	*b;

	a_int = 100;
	b_int = 5;
	a = &a_int;
	b = &b_int;
	printf("Valor de 'a' e 'b' antes da funcao  %i, %i\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("Valor de 'a' e 'b' depois da funcao %i, %i\n", *a, *b);
	return (0);
}


//assignment to ‘int’ from ‘int *’ makes integer from pointer without a cast
//atribuição para 'int' de 'int *' faz inteiro de ponteiro sem conversão