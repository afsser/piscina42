/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:56:43 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/28 16:22:30 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	draw(int x, int y, int a, int l)
{
	if ((a == 0 && l == 0) || ((a == y - 1 && l == x - 1) && (a && l != 0)))
		ft_putchar('/');
	else if ((a == 0 && l == x - 1) || (l == 0 && a == y - 1))
		ft_putchar('\\');
	else if (a == 0 || l == 0 || a == y - 1 || l == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
	{
	int	a;
	int	l;

	a = 0;
	if (x > 0 && y > 0)
	{
		while (a < y)
		{
			l = 0;
			while (l < x)
			{
				draw(x, y, a, l);
				l++;
			}
			ft_putchar('\n');
			a++;
		}
	}
}
