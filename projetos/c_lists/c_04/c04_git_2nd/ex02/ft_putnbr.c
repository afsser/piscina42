/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:23:04 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/13 12:50:56 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	draw(long int nb)
{
	char	buffer[20];
	int		length;
	int		i;

	length = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_printchar('-');
	}
	while (nb != 0)
	{
		buffer[length] = '0' + (nb % 10);
		nb /= 10;
		length++;
	}
	i = length - 1;
	while (i >= 0)
	{
		ft_printchar(buffer[i]);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	long int	long_nb;

	long_nb = nb;
	if (long_nb == 0)
		ft_printchar('0');
	else
		draw(long_nb);
}

int	main(void)
{
	int	nb;

	nb = -1000;
	while (nb++ < 1000)
	{
		ft_putnbr(nb);
		write(1, ", ", 2);
	}
	write(1, "\n", 1);
	nb = 
	write(1, "\n", 1);
}
