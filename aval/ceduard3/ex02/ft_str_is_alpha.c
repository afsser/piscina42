/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:44:54 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:24:22 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] < 'A' || str [n] > 'Z')
		{
			if (str [n] < 'a' || str [n] > 'z')
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
	char	str[] = "";

	src = str;
	printf ("retorno é: %d\n", ft_str_is_alpha(src));
	return (0);
}
