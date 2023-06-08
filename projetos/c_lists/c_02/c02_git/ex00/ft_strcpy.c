/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:57:14 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 12:58:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	desta[] = "aaaaaaaaaaaaaaaa";
// 	char	srca[] = "muito legal";
// 	char	*dest = desta;
// 	char	*src = srca;

// 	printf ("src estava: %s\n", src);
// 	ft_strcpy(dest, src);
// 	printf ("dest agora é: %s\n", dest);

// 	return (0);
// }
