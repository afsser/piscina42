/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:22:05 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 14:25:29 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char			*s1;
// 	char			*s2;
// 	char			str1[] = "natalí";
// 	char			str2[] = "natali";

// 	s1 = str1;
// 	s2 = str2;
// 	printf("o retorno é: %d\n", ft_strcmp(s1, s2));
// 	printf("a strncmp retorna: %d\n", strcmp(s1, s2));
// 	return (0);
// }
