/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:37:30 by gacardos          #+#    #+#             */
/*   Updated: 2023/06/08 16:35:39 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'z';
	if (letter == 'z')
	{
		while (letter >= 'a')
		{
			write(1, &letter, 1);
			letter--;
		}
	}
}


int	main(void)
{
	ft_print_alphabet();
}

