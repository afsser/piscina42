/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:21:19 by acaroli5          #+#    #+#             */
/*   Updated: 2023/06/13 17:39:20 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	ft_strupcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

char	ft_strlowcase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev_letter;

	i = 0;
	while (str[i] != '\0')
	{
		prev_letter = i - 1;
		if (!ft_str_is_alphanum(str[prev_letter]))
			str[i] = ft_strupcase(str[i]);
		else
			str[i] = ft_strlowcase(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "saluT, comment? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
