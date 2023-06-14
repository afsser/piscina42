/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:39:49 by acaroli5          #+#    #+#             */
/*   Updated: 2023/06/13 17:37:43 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable("\n\t\v\f"));
	printf("%d", ft_str_is_printable("fjfdn vj\nkhsbj n"));
	printf("%d", ft_str_is_printable("fj ;/;"));
}
