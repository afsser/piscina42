/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:57:09 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 17:00:10 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	// if (nb == 2147483647)
	// 	return (1);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(2147483647));
}
