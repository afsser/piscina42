/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:45:15 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:36:38 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	first_string;
	int	second_string;

	first_string = 0;
	second_string = 0;
	while (dest[first_string] != '\0')
	{
	first_string++;
	}
	while (src[second_string] != '\0')
	{
		dest[first_string] = src[second_string];
		first_string++;
		second_string++;
	}
	dest[first_string] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[50] = "Gislanei,";
	char src[] = " Cadete da 42!";

	printf("%s", ft_strcat(dest, src));
	return (0);
}
