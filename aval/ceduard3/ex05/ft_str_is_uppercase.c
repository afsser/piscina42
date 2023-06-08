/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:55:03 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:26:46 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] < 'A' || str [n] > 'Z')
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
	char	str[] = "SADHKAJHJKHZBjNKJNZ";

	src = str;
	printf ("retorno é: %d\n", ft_str_is_uppercase(src));
	return (0);
}