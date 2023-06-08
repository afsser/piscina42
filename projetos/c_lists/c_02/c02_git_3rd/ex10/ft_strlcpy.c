/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:55:47 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/07 15:35:37 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
		{	
			dest[i] = src[i];
			i++;
		}
		if (i == size - 1)
		{	
			dest[i] = '\0';
			break ;
		}
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*dest;
// 	char	*src;
// 	char	str[] = "ola boa noite, como vai, 
// voce ja falou que ama a norminette hoje ?";
// 	char	str_dest[] = "aaaaaaaaaaaaaaaaaaaaaaaa";
// 	int		n;

// 	n = 19;
// 	dest = str_dest;
// 	src = str;
// 	printf ("src estava: %s\n", src);
// 	printf ("retorno é: %d\n", ft_strlcpy(dest, src, n));
// 	printf ("dest agora é: %s\n", dest);
// 	return (0);
// }
