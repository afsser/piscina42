/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:30:58 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/11 15:48:42 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduzir de forma idêntica o funcionamento da função strstr (man strstr).
// A strstr()função retorna um ponteiro 
// para a primeira ocorrência de uma string em outra string.

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			*src;
	char			*to_find;
	char			src_arr[] = "aaaacaaaaaacaaaaacaraaaaaaaaacaroaaaaaaaaaaaa";
	char			to_find_arr[] = "caro";

	src = src_arr;
	to_find = to_find_arr;
	printf("o retorno é: %s\n", ft_strstr(src, to_find));
	printf("o retorno da função é: %s\n", strstr(src, to_find));
	return (0);
}
