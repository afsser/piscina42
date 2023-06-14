/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:12:04 by josfelip          #+#    #+#             */
/*   Updated: 2023/06/12 15:09:20 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	int	d;

	d = x + '0';
	write(1, &d, 1);
}

void	ft_print_numbers(void)
{
	int	x;

	x = -1;
	while (++x < 10)
	{
		ft_putchar(x);
	}
}
int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}