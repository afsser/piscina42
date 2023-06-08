/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:43:00 by mgaletti          #+#    #+#             */
/*   Updated: 2023/06/06 18:20:10 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 42;

	printf("Antes - %d\n", a);
	printf("Antes - %d\n", b);

	ft_swap(&a,&b);

	printf("Depois - %d\n", a);
	printf("Depois - %d\n", b);
}