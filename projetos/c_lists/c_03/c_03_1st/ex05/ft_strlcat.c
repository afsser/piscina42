/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:21:55 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 20:25:12 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	s_len;
	unsigned int	d_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	d = d_len;
	s = 0;
	while ((src[s] != '\0') && d < size - 1 && size)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	if (size < d_len)
		return (s_len + size);
	else
		return (d_len + s_len);
}

int	main(void)
{
	char			*src;
	char			*dest;
	char			src_arr[] = "wooorld";
	char			dest_arr[] = "hellooo ";
	unsigned int	size = 10;
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

// gcc -Wextra -Wall -Werror -lbsd * && ./a.out
