/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:56:45 by mgaletti          #+#    #+#             */
/*   Updated: 2023/06/06 18:19:09 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int main(void)
{
	int nbr;
	int *p_nbr9;
	int **p_nbr8;
	int ***p_nbr7;
	int ****p_nbr6;
	int *****p_nbr5;
	int ******p_nbr4;
	int *******p_nbr3;
	int ********p_nbr2;
	int *********p_nbr;

	nbr = 32;

	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;
	
	printf("Antes - %d\n", nbr);

	ft_ultimate_ft(p_nbr);
	printf("Depois - %d\n", nbr);
	return (0);
}