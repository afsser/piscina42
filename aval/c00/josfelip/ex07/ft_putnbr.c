/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:12:04 by josfelip          #+#    #+#             */
/*   Updated: 2023/06/12 15:19:59 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int n)
{
	int	d;

	d = n + '0';
	write(1, &d, 1);
}

void	ft_putnbr(int nb)
{
	int	q;
	int	s;

	s = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		s = -1;
	}
	if (nb < 10 && nb > -10)
		ft_putint(nb * s);
	else
	{
		q = nb / 10;
		q *= s;
		ft_putnbr(q);
		nb %= 10;
		ft_putnbr(nb * s);
	}	
}
int main(void)
{
	ft_putnbr((int)-2147483649);
	write(1, "\n", 1);
}
