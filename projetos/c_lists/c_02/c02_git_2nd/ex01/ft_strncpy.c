/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:20:32 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/06 19:50:40 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
		dest[i] = src[i];
		i++;
		}
		else
		{
		dest[i] = '\0';
		i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[100];
// 	char	src[] = "muito legal este exercicio estou encantado";
// 	int		n;

// 	n = 15;
// 	printf ("src estava: %s\n", src);
// 	printf ("retorno: %s\n", ft_strncpy(dest, src, n));
// 	printf ("dest agora é: %s\n", dest);
// 	return (0);
// }
