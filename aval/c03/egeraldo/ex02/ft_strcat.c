/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:15:23 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/11 15:45:09 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduzir de forma idêntica o funcionamento da função strcat (man strcat).

// A função strcat() contcatena (junta) duas strings.
// Observação: quando usamos strcat(), 
// o tamanho da string de destino deve ser grande
// o suficiente para armazenar a string resultante. 
// Caso contrário, obteremos o erro de falha de segmentação.

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			*src;
	char			*dest;
	char			src_arr[] = "felipe caldas";
	char			dest_arr[] = "meu nome é: ";

	src = src_arr;
	dest = dest_arr;
	printf("o retorno é: %s\n", ft_strcat(dest, src));
	// printf("o retorno da função é: %s\n", strcat(dest, src));
	return (0);
}