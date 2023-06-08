/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:16:41 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/31 17:10:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	draw(int nb)
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
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		draw(nb);
}
