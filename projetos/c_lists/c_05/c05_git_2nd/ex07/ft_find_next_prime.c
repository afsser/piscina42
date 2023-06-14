/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:10:58 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 18:50:43 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	while (check < nb / check)
	{
		if ((nb % check) == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	result;

// 	nb = 2147483646;
// 	result = ft_find_next_prime(nb);
// 	if (result == nb)
// 		printf("o próprio %d é primo\n", result);
// 	else
// 		printf("o próximo numero primo é %d\n", result);
// }
// 2147483646