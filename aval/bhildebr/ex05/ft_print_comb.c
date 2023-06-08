/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:16:39 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:53:55 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define DIGITS "0123456789"

void	ft_print(int counter[])
{
	write(STDOUT_FILENO, &DIGITS[counter[0]], 1);
	write(STDOUT_FILENO, &DIGITS[counter[1]], 1);
	write(STDOUT_FILENO, &DIGITS[counter[2]], 1);
}

void	ft_print_comb(void)
{
	int		counter[3];

	counter[0] = 0;
	counter[1] = 1;
	counter[2] = 2;
	while (counter[0] < 10)
	{
		while (counter[1] < 10)
		{
			while (counter[2] < 10)
			{
				ft_print (counter);
				if (counter[0] == 7 && counter[1] == 8 && counter[2] == 9)
					return ;
				write(STDOUT_FILENO, ", ", 2);
				counter[2]++;
			}
			counter[1] += 1;
			counter[2] = counter[1] + 1;
		}
		counter[0] += 1;
		counter[1] = counter[0] + 1;
		counter[2] = counter[1] + 1;
	}
}

int main()
{
	ft_print_comb();
}