/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_rows.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:22:44 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/04 17:26:02 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	g_row_p[24][4];
int			g_is_valid;
int			g_row_p_number;
char		g_arr[4];

void	check_equals(void)
{
	int	m;
	int	n;

	m = 0;
	while (m < 4)
	{
		n = m + 1;
		while (n < 4)
		{
			if (g_arr[m] == g_arr[n])
			{
				g_is_valid = 0;
				break ;
			}
			n++;
		}
		if (!g_is_valid)
			break ;
		m++;
	}
}

void	check_possibilities(void)
{
	int	k;

	g_is_valid = 1;
	check_equals();
	if (g_is_valid)
	{
		k = 0;
		while (k < 4)
		{
			g_row_p[g_row_p_number][k] = g_arr[k];
			k++;
		}
		g_row_p_number++;
	}
}

void	generate_rows(void)
{
	g_row_p_number = 0;
	g_arr[0] = '1';
	while (g_arr[0] <= '4')
	{
		g_arr[1] = '1';
		while (g_arr[1] <= '4')
		{
			g_arr[2] = '1';
			while (g_arr[2] <= '4')
			{
				g_arr[3] = '1';
				while (g_arr[3] <= '4')
				{
					check_possibilities();
					g_arr[3]++;
				}
				g_arr[2]++;
			}
			g_arr[1]++;
		}
		g_arr[0]++;
	}
}
