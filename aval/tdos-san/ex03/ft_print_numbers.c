/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:17:32 by tdos-san          #+#    #+#             */
/*   Updated: 2023/06/07 12:53:13 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number += 1;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
