/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:16:45 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/12 17:47:29 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// 	ft_putstr(str);
// 	write(1, "\n", 1);
// 	return (0);
// }
