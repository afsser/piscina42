/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:51:17 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/04 17:58:03 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	*g_arg;
extern char	g_matrix[4][4];
extern int	g_is_valid_matrix;
int			g_heights[4];

int	check_pov(int heights[4], int sighted);

void	check_for_column_up(void)
{
	int	counter;
	int	iterator;
	int	row;
	int	current_arg;

	counter = 0;
	while (counter < 4)
	{
		current_arg = g_arg[counter * 2] - '0';
		row = 0;
		iterator = 0;
		while (row < 4)
		{
			g_heights[iterator] = g_matrix[row][counter % 4];
			row++;
			iterator++;
		}
		if (!check_pov(g_heights, current_arg))
			g_is_valid_matrix = 0;
		counter++;
	}
}

void	check_for_column_down(void)
{
	int	counter;
	int	current_arg;
	int	row;
	int	iterator;

	counter = 4;
	while (counter < 8)
	{
		current_arg = g_arg[counter * 2] - '0';
		row = 3;
		iterator = 0;
		while (row >= 0)
		{
			g_heights[iterator] = g_matrix[row][counter % 4];
			row--;
			iterator++;
		}
		if (!check_pov(g_heights, current_arg))
			g_is_valid_matrix = 0;
		counter++;
	}
}

void	check_for_row_left(void)
{
	int	counter;
	int	current_arg;
	int	column;
	int	iterator;

	counter = 8;
	while (counter < 12)
	{
		current_arg = g_arg[counter * 2] - '0';
		column = 0;
		iterator = 0;
		while (column < 4)
		{
			g_heights[iterator] = g_matrix[counter % 4][column];
			column++;
			iterator++;
		}
		if (!check_pov(g_heights, current_arg))
			g_is_valid_matrix = 0;
		counter++;
	}
}

void	check_for_row_right(void)
{
	int	counter;
	int	current_arg;
	int	column;
	int	iterator;

	counter = 12;
	while (counter < 16)
	{
		current_arg = g_arg[counter * 2] - '0';
		column = 3;
		iterator = 0;
		while (column >= 0)
		{
			g_heights[iterator] = g_matrix[counter % 4][column];
			column--;
			iterator++;
		}
		if (!check_pov(g_heights, current_arg))
			g_is_valid_matrix = 0;
		counter++;
	}
}

void	check_arg(void)
{
	check_for_column_up();
	check_for_column_down();
	check_for_row_left();
	check_for_row_right();
}
