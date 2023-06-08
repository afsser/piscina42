/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:28:35 by gacardos          #+#    #+#             */
/*   Updated: 2023/06/08 16:34:31 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	if (letter == 'a')
	{
		while (letter <= 'z')
		{
			write(1, &letter, 1);
			letter++;
		}
	}
}


int	main(void)
{
	ft_print_alphabet();
}
