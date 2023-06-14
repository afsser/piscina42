/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:45:11 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:33:50 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && index < n - 1 && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "Gislinda";
	str2 = "Gis1inda";
	n = 3;
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d", strncmp(str1, str2, n));
	return (0);
}
