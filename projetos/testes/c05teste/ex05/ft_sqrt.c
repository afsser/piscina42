/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:50:58 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 15:21:07 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	sqrt;
	long int	long_nb;

	long_nb = nb;
	sqrt = 1;
	while (sqrt * sqrt < long_nb)
	{
		if (sqrt * sqrt == long_nb)
			return (sqrt);
		sqrt++;
	}
	if (sqrt * sqrt == long_nb)
		return (sqrt);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;

// 	nb = -2147483648;
// 	printf("a raiz quadrada de %d é: %d\n", nb, ft_sqrt(nb));
// }

// 2147483647
// 2147395600