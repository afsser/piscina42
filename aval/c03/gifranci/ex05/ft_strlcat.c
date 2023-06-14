/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:31:12 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:44:38 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	d = ft_strlen(dest);
	s = 0;
	while ((src[s] != '\0') && ((d + 1) < size))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[s]));
}
#include <stdio.h>
int main(void)
{
 char    source[] = "num país tropical!";
 char    destin[] = "Gislane, ";
 unsigned int    n;

 n = 3;
 printf("source: %s\n", source);
 printf("destin: %s\n", destin);
 printf("result: %d\n", ft_strlcat(destin, source, n));
printf("destin: %s\n", destin);
 return (0);
}
