/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:45:03 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:34:24 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*((unsigned char *)s1) - (*(unsigned char *)s2));
}
#include <string.h>
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_strcmp("1", "5"));
	printf("%d\n", strcmp("1", "5"));

	return (0);
}
