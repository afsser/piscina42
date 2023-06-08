/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:04:37 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/29 22:02:39 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(int x, int y, int z)
{
	ft_write(x + '0');
	ft_write(y + '0');
	ft_write(z + '0');
	if (x < 7)
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
