/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:44:54 by tbohn-co          #+#    #+#             */
/*   Updated: 2023/06/12 19:06:15 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	*dest = '\0';
	dest -= count;
	return (dest);
}

int main(){

   char palavra1[50] = "bola"; // \0
   char palavra2[50] = "abacate";
//    char palavra3[50] = "torta";
   char *result;

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);

   result = ft_strcpy(palavra2, palavra1);

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);
   printf("\n%s", result);

   return 0;
}
