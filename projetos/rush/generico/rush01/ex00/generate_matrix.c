/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:27:47 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/04 18:17:34 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char	*g_arg;
extern char	g_row_p[24][4];
extern char	g_matrix[4][4];
extern int	g_is_valid_matrix;
int			g_column;

int		check_pov(int heights[4], int sighted);
void	check_arg(void);

void	check_for_repeated_numbers(void)
{
	int	column;
	int	m;
	int	n;

	column = 0;
	while (column < 4)
	{
		m = 0;
		while (m < 4)
		{
			n = m + 1;
			while (n < 4)
			{
				if (g_matrix[m][column] == g_matrix[n][column])
					g_is_valid_matrix = 0;
				n++;
			}
			m++;
		}
		column++;
	}
}

void	checks(void)
{
	check_for_repeated_numbers();
	check_arg();
}

void	update_matrix(int i, int j, int k, int l)
{
	g_column = 0;
	while (g_column < 4)
	{
		g_matrix[0][g_column] = g_row_p[i][g_column];
		g_column++;
	}
	g_column = 0;
	while (g_column < 4)
	{
		g_matrix[1][g_column] = g_row_p[j][g_column];
		g_column++;
	}
	g_column = 0;
	while (g_column < 4)
	{
		g_matrix[2][g_column] = g_row_p[k][g_column];
		g_column++;
	}
	g_column = 0;
	while (g_column < 4)
	{
		g_matrix[3][g_column] = g_row_p[l][g_column];
		g_column++;
	}
}

int	should_break(int array[4])
{
	int	row;
	int	column;

	g_is_valid_matrix = 1;
	update_matrix(array[0], array[1], array[2], array[3]);
	checks();
	if (g_is_valid_matrix)
	{
		row = 0;
		while (row < 4)
		{
			column = 0;
			while (column < 4)
			{
				write(1, &g_matrix[row][column], 1);
				if (column != 3)
					write(1, " ", 1);
				column++;
			}
			write(1, "\n", 1);
			row++;
		}
		return (1);
	}
	return (0);
}

int	generate_matrix(void)
{
	int	array[4];

	array[0] = 0;
	while (array[0] < 24)
	{
		array[1] = 0;
		while (array[1] < 24)
		{
			array[2] = 0;
			while (array[2] < 24)
			{
				array[3] = 0;
				while (array[3] < 24)
				{
					if (should_break(array))
						return (1);
					array[3]++;
				}
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
	return (0);
}
