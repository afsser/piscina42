/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:49:48 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:25:54 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] < '0' || str [n] > '9')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*src;
	char	str[] = "132456798123456798";

	src = str;
	printf ("retorno é: %d\n", ft_str_is_numeric(src));
	return (0);
}
