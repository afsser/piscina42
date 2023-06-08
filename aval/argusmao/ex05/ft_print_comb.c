/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:07:34 by argusmao          #+#    #+#             */
/*   Updated: 2023/06/02 15:20:25 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static const char	g_digits[10] = {
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
};

void	check_equals(int i, int j, int k)
{
	if (i < j && j < k)
	{
		write(1, &g_digits[i], 1);
		write(1, &g_digits[j], 1);
		write(1, &g_digits[k], 1);
		if (i == 7 && j == 8 && k == 9)
			return ;
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

int	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	index_array;

	i = 0;
	index_array = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				check_equals(i, j, k);
				k++;
				index_array++;
			}
			j++;
		}
		i++;
	}
	return (0);
}


int main(void)
{
	ft_print_comb();
}