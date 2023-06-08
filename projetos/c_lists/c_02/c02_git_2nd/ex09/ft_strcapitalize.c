/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:49:14 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/06 19:46:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97)
			|| str[i - 1] > 122
			|| str[i - 1] < 48)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (*str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	str[] = "salut, cOMMENT tu vas ?
//42mots qUARANte-deux; cinquante+et+un";

// 	src = str;
// 	printf ("a frase era: %s\n", src);
// 	ft_strcapitalize(src);
// 	printf ("agora a frase é: %s\n", str);
// 	return (0);
// }
