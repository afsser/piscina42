/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:27:28 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:58:48 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_positive_nbr(long nbr, char digits[])
{
	int	counter;

	counter = 0;
	while (nbr > 0)
	{
		digits[counter] = (nbr % 10) + '0';
		nbr /= 10;
		counter++;
	}
	counter--;
	while (counter >= 0)
	{
		write(STDOUT_FILENO, &digits[counter], sizeof(char));
		counter--;
	}
}

void	ft_putnbr(int nb)
{
	long	nbr;
	char	digits[10];

	nbr = nb;
	if (nbr == 0)
	{
		write(STDOUT_FILENO, "0", sizeof(char));
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		write(STDOUT_FILENO, "-", sizeof(char));
	}
	ft_put_positive_nbr(nbr, digits);
}
int main()
{
	int nb = -23023928;
	ft_putnbr(nb);
}