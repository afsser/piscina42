/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:28:22 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/14 18:53:44 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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

// 	nb = 2;
// 	power = 30;
// 	printf("%d elevado a %d é: %d\n", nb, power, ft_recursive_power(nb, power));
// }
