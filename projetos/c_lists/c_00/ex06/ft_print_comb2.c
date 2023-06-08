/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:47:41 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/31 15:27:56 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(int a, int b, int c, int d)
{
	ft_write(a + '0');
	ft_write(b + '0');
	ft_write(' ');
	ft_write(c + '0');
	ft_write(d + '0');
	ft_write(',');
	ft_write(' ');
}

void	segundo(int a, int b, int c, int d)
{
	c = a;
	while (c <= 9)
	{
		if (c == a)
			d = b + 1;
		else
			d = 0;
		while (d <= 9)
		{
			ft_putchar(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	c = 0;
	d = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			segundo(a, b, c, d);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
