/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:09:23 by argusmao          #+#    #+#             */
/*   Updated: 2023/06/02 15:23:50 by fcaldas-         ###   ########.fr       */
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

void	putchar(int i, int j, int k, int l)
{
	write(1, &g_digits[i], 1);
	write(1, &g_digits[j], 1);
	write(1, " ", 1);
	write(1, &g_digits[k], 1);
	write(1, &g_digits[l], 1);
	if (i == 9 && j == 8 && k == 9 && l == 9)
		return ;
	write(1, ",", 1);
	write(1, " ", 1);
}

int	ft_print_comb2(void)
{
	int	arr[4];

	arr[0] = 0;
	while (arr[0] <= 9)
	{
		arr[1] = 0;
		while (arr[1] <= 9)
		{
			arr[2] = 0;
			while (arr[2] <= 9)
			{
				arr[3] = arr[1] + 1;
				while (arr[3] <= 9)
				{
					putchar(arr[0], arr[1], arr[2], arr[3]);
					arr[3] = arr[3] + 1;
				}
				arr[2] = arr[2] + 1;
			}
			arr[1] = arr[1] + 1;
		}
		arr[0] = arr[0] + 1;
	}
	return (0);
}


int main(void)
{
	ft_print_comb2();
}