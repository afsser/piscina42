/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:08:56 by gacardos          #+#    #+#             */
/*   Updated: 2023/06/08 16:40:16 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ten1, char ten2, char unit1, char unit2)
{
	write(1, &ten1, 1);
	write(1, &unit1, 1);
	write(1, " ", 1);
	write(1, &ten2, 1);
	write(1, &unit2, 1);
	if (!(ten1 == '9' && unit1 == '8'))
		write(1, ", ", 2);
}

void	ft_second_digit(char ten1, char unit1)
{
	char	ten2;
	char	unit2;
	char	resset;

	resset = 1;
	ten2 = ten1;
	while (ten2 <= '9')
	{
		if (resset)
		{
			unit2 = unit1 + 1;
			resset = 0;
		}
		else
			unit2 = '0';
		while (unit2 <= '9')
		{
			ft_putchar(ten1, ten2, unit1, unit2);
			unit2++;
		}
		ten2++;
	}
}

void	ft_print_comb2(void)
{
	char	ten1;
	char	unit1;

	ten1 = '0';
	while (ten1 <= '9')
	{
		unit1 = '0';
		while (unit1 <= '9')
		{
			ft_second_digit(ten1, unit1);
			unit1++;
		}
		ten1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
