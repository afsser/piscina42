/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 23:15:17 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/05/31 23:25:44 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

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

// int	main(void)
// {
// 	char	*str = "Ola raimundo";
// 	int		result;

// 	ft_strlen(str);
// 	result = ft_strlen(str);
// 	printf("a str contem %i caracteres\n", result);
// 	return (0);
// }
