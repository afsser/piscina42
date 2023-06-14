/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:45:19 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:40:07 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				first_string;
	unsigned int	index;

	first_string = 0;
	index = 0;
	while (dest[first_string] != '\0')
	{
		first_string++;
	}
	while (src[index] != '\0' && index < nb)
	{
		dest[first_string] = src[index];
		index++;
		first_string++;
	}
	dest[first_string] = '\0';
	return (dest);
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
