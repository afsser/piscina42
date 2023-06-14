/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:55:51 by acaroli5          #+#    #+#             */
/*   Updated: 2023/06/13 17:37:56 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	test[] = "abcd ABCD";
	char	test1[] = "abc42Z";
	char	test2[] = "?a_b-c!@";

	printf("%s\n", ft_strupcase(test));
	printf("%s\n", ft_strupcase(test1));
	printf("%s\n", ft_strupcase(test2));
}
