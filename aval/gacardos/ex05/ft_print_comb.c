/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:57:05 by gacardos          #+#    #+#             */
/*   Updated: 2023/06/08 16:38:40 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	while (hundred <= '9')
	{
		ten = hundred + 1;
		while (ten <= '9')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				write(1, &hundred, 1);
				write(1, &ten, 1);
				write(1, &unit, 1);
				if (!(hundred == '7'))
					write(1, ", ", 2);
				unit++;
			}
			ten++;
		}
		hundred++;
	}
}

int	main(void)
{
	ft_print_comb();
}
