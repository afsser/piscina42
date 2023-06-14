/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:15:59 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 16:51:42 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 4! = 1 * 2 * 3 * 4
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}