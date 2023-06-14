/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:27:12 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/11 15:46:55 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduzir de forma idêntica o funcionamento da função strncat (man strncat).
// A strncat()função acrescenta os primeiros n caracteres 
// da string terminada em nulo apontada pela origem
// à string terminada em nulo apontada para o destino
// O primeiro caractere da origem substitui o terminador nulo do destino. 
// A função retorna o ponteiro para a string de destino.

// A origem não deve se sobrepor ao destino, 
// e o destino deve ser grande o suficiente
// para conter a string resultante concatenada, 
// incluindo o caractere nulo adicional.

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
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
	unsigned int	nb = 5;

	src = src_arr;
	dest = dest_arr;
	// printf("o retorno é: %s\n", ft_strncat(dest, src, nb));
	printf("o retorno da função é: %s\n", strncat(dest, src, nb));
	return (0);
}
