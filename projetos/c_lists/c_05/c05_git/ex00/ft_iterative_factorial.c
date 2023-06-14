/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:55:27 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 15:52:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			fat = fat * nb;
			nb--;
		}
		return (fat);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = -89;
	printf("o fatorial de %d é: %d\n", nb, ft_iterative_factorial(nb));
}
