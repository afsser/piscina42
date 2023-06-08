/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:07:46 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/02 17:00:54 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	value1;
	int	value2 = &value1;
	int	**value3 = &value2;
	int	***value4 = &value3;
	int	****value5 = &value4;
	int	*****value6 = &value5;
	int	******value7 = &value6;
	int	*******value8 = &value7;
	int	********value9 = &value8;
	int *********value10 = &value9;


	ft_ultimate_ft(value10);
	printf("%i\n", value1);
}
