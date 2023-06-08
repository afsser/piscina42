/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:18:01 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:04:18 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;

	a = 35;
	printf("Ponteiro: %p \n", &a);
	printf("pont: %d \n", a);
	ft_ft(&a);
	printf("Ponteiro: %p \n", &a);
	printf("pont: %d \n", a);
}
