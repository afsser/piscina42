/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:58:26 by mgaletti          #+#    #+#             */
/*   Updated: 2023/06/06 18:21:06 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 22;
	b = 10;
	printf("Antes - %d\n", a);
	printf("Antes - %d\n", b);
	ft_div_mod(a,b,&c,&d);
	printf("Depois - %d\n", c);
	printf("Depois - %d\n", d);
}