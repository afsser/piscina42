/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:01:38 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:31:48 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] >= 'A' && str [n] <= 'Z')
		{
			str [n] = str [n] + 32;
		}
	n++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*src;
	char	str[16] = "12ASDuBCGaAzZ`{";

	src = str;
	printf ("a frase era: %s\n", src);
	ft_strlowcase(src);
	printf ("agora a frase é: %s\n", str);
	return (0);
}
