/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:00:56 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/01 17:54:11 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*reader;

	reader = str;
	while (*reader != '\0')
	{
		write(STDOUT_FILENO, reader, 1);
		reader++;
	}
}

// int	main(void)
// {
// 	char	*str = "Ola raimundo";

// 	printf("str contem: %s\n", str);
// 	ft_putstr(str);
// 	return (0);
// }
	// printf("reader contem: %s\n", reader);
