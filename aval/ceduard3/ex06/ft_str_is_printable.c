/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:57:00 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:30:14 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] < 32 || str [n] > 126)
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
	char	str[] = "~~~~~!!!!!!!!aasdasdmznoebnn767567567";

	src = str;
	printf ("retorno é: %d\n", ft_str_is_printable(src));
	return (0);
}
