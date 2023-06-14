/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:56:33 by acaroli5          #+#    #+#             */
/*   Updated: 2023/06/13 17:38:18 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	test[] = "abcd ABCD";
	char    test1[] = "a42ABC42z";
	char    test2[] = "?a_M-C!@";

	printf("%s\n", ft_strlowcase(test));
	printf("%s\n", ft_strlowcase(test1));
	printf("%s\n", ft_strlowcase(test2));
}
