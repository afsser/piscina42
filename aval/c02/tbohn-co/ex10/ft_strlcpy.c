/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:05:42 by tbohn-co          #+#    #+#             */
/*   Updated: 2023/06/12 19:21:11 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;

	count = 0;
	while (src[count] != '\0' && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count);
}

#include <stdio.h>

int main(){

   char palavra1[50] = "bola"; // \0
   char palavra2[50] = "abacate";
//    char palavra3[50] = "torta";
	int result;

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);

   result = ft_strlcpy(palavra2, palavra1, 50);

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);
   printf("\n%d\n\n", result);

	result = 0;
	while (palavra2[result] != '\0')
	{
		printf("%c", palavra2[result]);
		result++;
	}

   return 0;
}