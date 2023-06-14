/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:12:04 by josfelip          #+#    #+#             */
/*   Updated: 2023/06/12 15:26:27 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pow(int x, int y)
{
	int	p;
	int	i;

	p = x;
	i = 0;
	if (y == 0)
	{
		p = 1;
	}
	else
	{
		while (++i < y)
		{
			p = p * x;
		}
	}
	return (p);
}

int	ft_is_in_ascending_order(int *disp, int n)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (++i < n)
	{
		a = disp[i];
		b = disp[i - 1];
		if (n == 1)
			a = -1;
		if (b <= a)
			return (0);
	}
	return (1);
}

void	ft_putnbr(int nb, int l, int *disp)
{
	if (l < 2)
		disp[l - 1] = nb;
	else
	{
		while (l--)
		{
			disp[l] = nb / ft_pow(10, l);
			nb %= ft_pow(10, l);
		}
	}	
}

void	ft_put_nchar(int *disp, int n)
{
	char	c;

	while (n--)
	{
		c = (char)disp[n] + '0';
		write(1, &c, 1);
	}	
}

void	ft_print_combn(int n)
{
	int	i;
	int	max;
	int	disp[9];
	int	p;

	i = -1;
	max = ft_pow(10, n);
	p = 0;
	while (++i < max)
	{
		ft_putnbr(i, n, disp);
		if (ft_is_in_ascending_order(disp, n))
		{
			if (p)
				write(1, ", ", 2);
			ft_put_nchar(disp, n);
			p++;
		}
	}		
}
int main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
}
