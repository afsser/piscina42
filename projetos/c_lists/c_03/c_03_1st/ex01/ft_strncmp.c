/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:22:03 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 14:25:41 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && i < n - 1)
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
// 	unsigned int	n = 6;

// 	s1 = str1;
// 	s2 = str2;
// 	printf("o retorno é: %d\n", ft_strncmp(s1, s2, n));
// 	printf("a strncmp retorna: %d\n", strncmp(s1, s2, n));
// 	return (0);
// }
