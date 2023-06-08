/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:52:11 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:26:20 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] < 'a' || str [n] > 'z')
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
	char	str[] = "aadsafjkbjwmwenbAobzsdadasd";

	src = str;
	printf ("retorno é: %d\n", ft_str_is_lowercase(src));
	return (0);
}
