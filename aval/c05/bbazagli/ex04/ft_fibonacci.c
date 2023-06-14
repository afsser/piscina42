/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:33:46 by bbazagli          #+#    #+#             */
/*   Updated: 2023/06/14 16:57:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = index;
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(50));
	return (0);
}
