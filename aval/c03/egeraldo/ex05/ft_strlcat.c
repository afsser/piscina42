/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:54:13 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/11 15:51:24 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduzir de forma idêntica o funcionamento da função strlcat (man strlcat).
// ela concatena n caracteres de src a dest coloca NULL ao final da str
// retorna a soma de len de src e dest

#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (src_len + dest_len);
}
int	main(void)
{
	char			*src;
	char			*dest;
	char			src_arr[] = "wooorld";
	char			dest_arr[] = "hellooo ";
	unsigned int	size = 30;
	char			control_src[] = "wooorld";
	char			control_dest[] = "hellooo ";

	src = src_arr;
	dest = dest_arr;
	printf("o retorno é da minha: %u\n", ft_strlcat(dest, src, size));
	printf("a concatenação ficou assim: %s\n", dest);
	src = control_src;
	dest = control_dest;
	printf("o retorno da função é: %zu\n", strlcat(dest, src, size));
	printf("a concatenação ficou assim: %s\n", dest);
	return (0);
}


