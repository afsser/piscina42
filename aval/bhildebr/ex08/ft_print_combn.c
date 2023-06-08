/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:30:17 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:59:12 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char number[], int n)
{
	int	counter;

	counter = 10 - n;
	while (counter < 10)
	{
		write(STDOUT_FILENO, &number[counter], 1);
		counter++;
	}
	write (STDOUT_FILENO, "\n", sizeof(char));
}

void	ft_inc_number(char current_number[], int n)
{
	int	counter;

	current_number[9]++;
	counter = 9;
	while (counter >= 10 - n)
	{
		if (current_number[counter] == '0' + (counter + 1))
		{
			current_number[counter - 1]++;
			counter--;
		}
		else
		{
			counter--;
			break ;
		}
	}
	counter++;
	while (counter < 10)
	{
		if (current_number[counter] == '0' + (counter + 1))
			current_number[counter] = current_number[counter - 1] + 1;
		counter++;
	}
}

void	ft_rec(char current_number[], char last_number[], int n)
{
	int	counter;
	int	is_the_last_number;

	counter = 9;
	is_the_last_number = 1;
	while (counter >= 10 - n)
	{
		if (current_number[counter] != last_number[counter])
			is_the_last_number = 0;
		counter--;
	}
	if (is_the_last_number)
	{
		ft_print_number (current_number, n);
		return ;
	}
	ft_print_number (current_number, n);
	ft_inc_number (current_number, n);
	ft_rec (current_number, last_number, n);
}

void	ft_print_combn(int n)
{
	char	last_number[10];
	char	current_number[10];
	int		counter;

	counter = 0;
	while (counter < 10)
	{
		last_number[counter] = '0' - 1;
		current_number[counter] = '0' - 1;
		counter++;
	}
	counter = 10 - 1;
	while (counter >= 10 - n)
	{
		current_number[counter] = '0' + n - (10 - counter);
		counter--;
	}
	counter = 10 - 1;
	while (counter >= 10 - n)
	{
		last_number[counter] = '0' + counter;
		counter--;
	}
	ft_rec (current_number, last_number, n);
}

int	main(void)
{
	ft_print_combn (1);
	write(1, "\n", 1);
	ft_print_combn (2);
	write(1, "\n", 1);
	ft_print_combn (3);
	write(1, "\n", 1);
	ft_print_combn (4);
	write(1, "\n", 1);
	ft_print_combn (5);
	write(1, "\n", 1);
	ft_print_combn (6);
	write(1, "\n", 1);
	ft_print_combn (7);
	write(1, "\n", 1);
	ft_print_combn (8);
	write(1, "\n", 1);
	ft_print_combn (9);
	write(1, "\n", 1);
}
