/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:56:54 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 17:04:19 by fcaldas-         ###   ########.fr       */
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
	if (nb == 2147483647)
		return (1);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
		nb++;
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(31));
	printf("%d\n", ft_find_next_prime(2147483629));
}
