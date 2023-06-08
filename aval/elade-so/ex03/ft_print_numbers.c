/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:27:42 by elade-so          #+#    #+#             */
/*   Updated: 2023/06/02 16:24:51 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	index;

	index = '0';
	while (index <= '9')
	{
		write(1, &index, 1);
		index++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
