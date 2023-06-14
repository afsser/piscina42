/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:07:13 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 14:24:51 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{	
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 0;
// 	power = 0;
// 	printf("%d elevado a %d é: %d\n", nb, power, ft_iterative_power(nb, power));
// }
