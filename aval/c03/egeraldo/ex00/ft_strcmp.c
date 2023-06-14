/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:41:58 by egeraldo          #+#    #+#             */
/*   Updated: 2023/06/11 15:41:47 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduzir de forma idêntica o funcionamento da função strcmp (man strcmp).

// Essa função compara duas strings, str1 e str2, 
// retorna um valor inteiro que indica a relação entre as duas strings. 
// Os possíveis valores de retorno são:
// Um valor menor que zero, se str1 é menor que str2
// Zero, se str1 é igual a str2.
// Um valor maior que zero, se str1 é maior que str2

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char			*s1;
	char			*s2;
	char			str1[] = "natalí";
	char			str2[] = "natalío";

	s1 = str1;
	s2 = str2;
	printf("o retorno é: %d\n", ft_strcmp(s1, s2));
	printf("a strncmp retorna: %d\n", strcmp(s1, s2));
	return (0);
}
