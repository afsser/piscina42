/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:14:52 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 18:37:00 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	str[] = "12!@#$\%&*()-=+-_][~'`/;:''abcdefghijklmnopqrstuvwxyz`{";

// 	src = str;
// 	printf ("a frase era: %s\n", src);
// 	ft_strupcase(src);
// 	printf ("agora a frase é: %s\n", src);
// 	return (0);
// }
