/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:30:28 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/11 18:29:16 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print(char *c, int size)
{

}

void	print_number(int size, char *number)
{
	while (size > 0)
	{
		if (size == 2 && number[1] == 1
		&& number[0] >= 1 && number[0] <= 9)
		{
			// 11 a 19
			size = 1;
		}
			print(number[size - 1], size);
		size--;
		if (size == 9)
			ft_find_nb(buffer, "1000000000");
		if (size == 6)
			ft_find_nb(buffer, "1000000");
		if (size == 3)
			ft_find_nb(buffer, "1000");
	}
}
// 33 146 788   887 641 33 

char	read_nbr(char *nbr_str, unsigned int nb)
{
	int		length;

	length = 0;
	while (nb != 0)
	{
		nbr_str[length] = '0' + (nb % 10);
		nb /= 10;
		length++;
	}
	nbr_str[length] = '\0';
	return (*nbr_str);
}

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}


int	main(void)
{
	char	result[13];
	int		nbr;
	int		size;

	nbr = 12345;
	read_nbr(result, nbr);
	size = ft_strlen(result);
	printf("numero lido: %s\n", result);
	printf("temos %d numeros\n", size);
}
