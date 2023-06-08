/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:38:52 by awunderl          #+#    #+#             */
/*   Updated: 2023/06/08 17:13:28 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	ft_putchar(*str);
	while (*str++)
	{
		ft_putchar(*str);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str;

	str = "hello world";
	ft_putstr(str);
}
