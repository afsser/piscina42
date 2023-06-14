/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:43:13 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 16:54:54 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

#include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_sqrt(196));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(7));
    printf("%d\n", ft_sqrt(-196));
    printf("%d\n", ft_sqrt(9));
}