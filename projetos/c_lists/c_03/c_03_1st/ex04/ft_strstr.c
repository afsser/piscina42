/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:21:57 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/08 18:07:59 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			*src;
// 	char			*to_find;
// 	char			src_arr[] = "aaaacaaaaaacaaaaacaraaaaaaaaacaroaaaaaaaaaaaa";
// 	char			to_find_arr[] = "caro";

// 	src = src_arr;
// 	to_find = to_find_arr;
// 	printf("o retorno é: %s\n", ft_strstr(src, to_find));
// 	printf("o retorno da função é: %s\n", strstr(src, to_find));
// 	return (0);
// }
