/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:56:43 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/27 16:38:42 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
	{
	int	a;
	int	l;

	a = 0;
	while (a < y)
	{
		l = 0;
		while (l < x)
		{
			if (a == 0)
			{
				if (l == 0)
					ft_putchar('/');
				else if (l == x - 1)
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else if (a == y - 1)
			{
				if (l == 0)
					ft_putchar('\\');
				else if (l == x - 1)
					ft_putchar('/');
				else
					ft_putchar('*');
			}
			else
			{
				if (l == 0 || l == x - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			l ++;
		}
		ft_putchar('\n');
		a ++;
	}
}
