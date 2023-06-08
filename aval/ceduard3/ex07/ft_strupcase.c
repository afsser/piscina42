/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:59:52 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:30:53 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str [n] != '\0')
	{
		if (str [n] >= 'a' && str [n] <= 'z')
		{	
			str [n] = str [n] - 32;
		}
	n++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*src;
	char	str[] = "12!@#$\%&*()-=+-_][~'`/;:''abcdefghijklmnopqrstuvwxyz`{";

	src = str;
	printf ("a frase era: %s\n", src);
	ft_strupcase(src);
	printf ("agora a frase é: %s\n", src);
	return (0);
}