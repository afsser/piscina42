/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:32:46 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/02 14:42:16 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	deck(int *nbr)
{
	*nbr = *nbr - 1;
}

int	main(void)
{
	int *nbr;
	int numb = 10;

	nbr = &numb;
	numb = numb - 1;
	// deck(nbr);
	printf("%d", *nbr);
}
