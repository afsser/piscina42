/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:06 by dande-je          #+#    #+#             */
/*   Updated: 2023/06/14 17:54:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		nb_ascii;
	char	nb_str;

	nb_ascii = 48;
	if (nb == -2147483647)
		ft_putstr("-2147483647");
	else if (nb >= 0)
	{
		if (nb < 10)
		{
			nb_str = nb + nb_ascii;
			write(1, &nb_str, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			nb_str = (nb % 10) + nb_ascii;
			write(1, &nb_str, 1);
		}
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}

int	main(void)
{
	int	nb;

	nb = -1000;

		ft_putnbr(nb);

	write(1, "\n", 1);
	write(1, "\n", 1);
}
