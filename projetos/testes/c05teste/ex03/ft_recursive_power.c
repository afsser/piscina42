/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:28:22 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/13 13:34:29 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{	
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 23;
// 	power = 4;
// 	printf("%d elevado a %d é: %d\n", nb, power, ft_recursive_power(nb, power));
// }
