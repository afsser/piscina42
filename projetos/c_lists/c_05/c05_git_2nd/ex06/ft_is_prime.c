/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:01:05 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 18:49:11 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb <= 1)
		return (0);
	while (check <= nb / check)
	{
		if ((nb % check) == 0)
			return (0);
		check++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483646;
// 	if (ft_is_prime(nb) == 1)
// 		printf("%d é primo\n", nb);
// 	else
// 		printf("%d não é primo\n", nb);
// }
// 2147483647