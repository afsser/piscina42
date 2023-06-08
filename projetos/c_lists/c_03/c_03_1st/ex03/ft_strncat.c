/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:21:59 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 18:07:21 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;

	s = 0;
	d = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s] && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			*src;
// 	char			*dest;
// 	char			src_arr[] = "felipe caldas";
// 	char			dest_arr[] = "meu nome é: ";
// 	unsigned int	nb = 5;

// 	src = src_arr;
// 	dest = dest_arr;
// 	printf("o retorno é: %s\n", ft_strncat(dest, src, nb));
// 	// printf("o retorno da função é: %s\n", strncat(dest, src, nb));
// 	return (0);
// }
