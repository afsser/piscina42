/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:12:04 by josfelip          #+#    #+#             */
/*   Updated: 2023/06/12 15:11:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_in_ascending_order(int a, int b, int c)
{
	if (c > b && b > a)
	{
		return (1);
	}
	return (0);
}

void	ft_print_3d(int a, int b, int c)
{
	int	d3;
	int	d2;
	int	d1;

	d3 = a + '0';
	d2 = b + '0';
	d1 = c + '0';
	write(1, &d3, 1);
	write(1, &d2, 1);
	write(1, &d1, 1);
	if (a != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	b = -1;
	c = -1;
	while (++a <= 9)
	{
		while (++b <= 9)
		{
			while (++c <= 9)
			{
				if (ft_is_in_ascending_order(a, b, c))
				{
					ft_print_3d(a, b, c);
				}
			}
			c = 0;
		}
		b = 0;
	}			
}
int main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
}