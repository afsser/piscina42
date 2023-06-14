/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:12:04 by josfelip          #+#    #+#             */
/*   Updated: 2023/06/12 15:12:52 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_in_ascending_order(int x, int y)
{
	if (y > x)
	{
		return (1);
	}
	return (0);
}

void	ft_print_2d(int x, int y)
{
	int	d3;
	int	d2;
	int	d1;
	int	d0;

	d3 = x / 10 + '0';
	d2 = x % 10 + '0';
	d1 = y / 10 + '0';
	d0 = y % 10 + '0';
	write(1, &d3, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d1, 1);
	write(1, &d0, 1);
	if (!(x == 98 && y == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	max;

	max = 100;
	y = -1;
	x = -1;
	while (++x < max)
	{
		while (++y < max)
		{
			if (ft_is_in_ascending_order(x, y))
			{
				ft_print_2d(x, y);
			}
		}
		y = 0;
	}
}
int main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
}