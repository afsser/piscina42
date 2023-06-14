/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:27:20 by tbohn-co          #+#    #+#             */
/*   Updated: 2023/06/12 19:10:34 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if (!*src)
		*dest = '\0';
	dest -= count;
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(){

   char palavra1[50] = "bola"; // \0
   char palavra2[50] = "abacate";
   char palavra3[50] = "torta";
   char *result;

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);

   result = ft_strncpy(palavra3, palavra1, 3);

   printf("\npalavra 1: %s\npalavra2: %s\n", palavra1, palavra2);
   printf("\n%s", result);

   return 0;
}
