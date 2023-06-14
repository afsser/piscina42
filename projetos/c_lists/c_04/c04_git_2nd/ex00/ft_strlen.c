/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:08:26 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/12 18:05:27 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*read;
	int		length;

	length = 0;
	read = str;
	while (*read != '\0')
	{
		read++;
		length++;
	}
	return (length);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "123456789";
// 	int		result;

// 	ft_strlen(str);
// 	result = ft_strlen(str);
// 	printf("a str contem %i caracteres\n", result);
// 	return (0);
// }
