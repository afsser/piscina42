#include <unistd.h>
#include <stdio.h>

extern char *g_arg;
extern char g_row_p[24][4];
extern char g_matrix[4][4];

int	g_is_valid;

int check_pov(int heights[4], int sighted);

void	check_repeated_columns(int column)
{
	int	m;
	int n;

	column = 0;
	while (column < 4) {
		m = 0;
		while (m < 4) {
			n = m + 1;
			while (n < 4) {
				if (g_matrix[m][column] == g_matrix[n][column])
					g_is_valid = 0;
				n++;
			}
			m++;
		}
		column++;
	}
}



void	matrix(int i, int j, int k, int l)
{
	int g_is_valid = 1;
	int column = 0;
	while (column < 4) {
		g_matrix[0][column] = g_row_p[i][column];
		column++;
	}
	column = 0;
	while (column < 4) {
		g_matrix[1][column] = g_row_p[j][column];
		column++;
	}
	column = 0;
	while (column < 4) {
		g_matrix[2][column] = g_row_p[k][column];
		column++;
	}
	column = 0;
	while (column < 4) {
		g_matrix[3][column] = g_row_p[l][column];
		column++;
	}
					// check for repeated numbers in columns
	check_repeated_columns(column);

					// check if it solves the problem
					// for column up
					int heights[4];
					int counter = 0;
					while (counter < 4) {
						int current_arg = g_arg[counter * 2] - '0';

						int row = 0;
						int iterator = 0;
						while (row < 4) {
							heights[iterator] = g_matrix[row][counter % 4];
							row++;
							iterator++;
						}

						if (!check_pov(heights, current_arg))
							g_is_valid = 0;

						counter++;
					}

					// for column down
					counter = 4;
					while (counter < 8) {
						int current_arg = g_arg[counter * 2] - '0';

						int row = 3;
						int iterator = 0;
						while (row >= 0) {
							heights[iterator] = g_matrix[row][counter % 4];
							row--;
							iterator++;
						}
						if (!check_pov(heights, current_arg))
							g_is_valid = 0;

						counter++;
					}
					// for row_left
					counter = 8;
					while (counter < 12) {
						int current_arg = g_arg[counter * 2] - '0';

						int column = 0;
						int iterator = 0;
						while (column < 4) {
							heights[iterator] = g_matrix[counter % 4][column];
							column++;
							iterator++;
						}

						if (!check_pov(heights, current_arg))
							g_is_valid = 0;

						counter++;
					}

					// for row_right
					counter = 12;
					while (counter < 16) {
						int current_arg = g_arg[counter * 2] - '0';

						int column = 3;
						int iterator = 0;
						while (column >= 0) {
							heights[iterator] = g_matrix[counter % 4][column];
							column--;
							iterator++;
						}

						if (!check_pov(heights, current_arg))
							g_is_valid = 0;

						counter++;
					}

					if(g_is_valid)
					{
						int row = 0;
						while (row < 4) {
							int column = 0;
							while (column < 4) {
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

}
int	generate_matrix(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i < 24)
	{
		int j = 0;
		while (j < 24)
		{
			int k = 0;
			while (k < 24)
			{
				int l = 0;
				while (l < 24)
				{
					//função
					matrix(i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}