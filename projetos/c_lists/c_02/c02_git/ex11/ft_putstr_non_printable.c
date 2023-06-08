/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:55:50 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/07 15:40:56 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hex(char ch)
{
	char	*hex_chars;
	char	hex[3];
	char	conteudo_hex_1;

	hex_chars = "0123456789abcdef";
	hex[0] = hex_chars[(ch / 16) % 16];
	hex[1] = hex_chars[ch % 16];
	hex[2] = '\0';
	write(1, hex, 1);
	conteudo_hex_1 = hex[1];
	write(1, &conteudo_hex_1, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			char_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;
// 	char	arr[] = "Coucou\ntu vas bien ? Eu \nao to \nada \bem \real";

// 	str = arr;
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// }
