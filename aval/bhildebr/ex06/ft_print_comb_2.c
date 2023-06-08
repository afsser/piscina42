/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:51:38 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:57:38 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int number)
{
	char	first_digit;
	char	second_digit;

	first_digit = '0' + number / 10;
	second_digit = '0' + number % 10;
	write(STDOUT_FILENO, &first_digit, 1);
	write(STDOUT_FILENO, &second_digit, 1);
}

void	print_both_numbers(int first_number, int second_number)
{
	print_number(first_number);
	write(STDOUT_FILENO, " ", 1);
	print_number(second_number);
	if (first_number == 98 && second_number == 99)
	{
		return ;
	}
	else
	{
		write(STDOUT_FILENO, ", ", 2);
	}
}

void	ft_print_comb_2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 1;
	while (first_number <= 98)
	{
		print_both_numbers(first_number, second_number);
		if (second_number == 99)
		{
			first_number += 1;
			second_number = first_number;
		}
		second_number += 1;
	}
}

int main()
{
	ft_print_comb_2();
}
