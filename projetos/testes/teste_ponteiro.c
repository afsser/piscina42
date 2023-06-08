/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ponteiro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:13:17 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 19:28:37 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	show(int *a)
{
	long int	temp;

	temp = (long int)a;
	printf("\n%d\n", &temp);
}

int	main(void)
{
	int	*a;
	int	b;

	b = 10;
	a = &b;
	show(a);
}
