/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:22:01 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/11 15:44:41 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;

	s = 0;
	d = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (&dest[0]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			*src;
// 	char			*dest;
// 	char			src_arr[] = "felipe caldas";
// 	char			dest_arr[] = "meu nome é: ";

// 	src = src_arr;
// 	dest = dest_arr;
// 	// printf("o retorno é: %s\n", ft_strcat(dest, src));
// 	printf("o retorno da função é: %s\n", strcat(dest, src));
// 	return (0);
// }
