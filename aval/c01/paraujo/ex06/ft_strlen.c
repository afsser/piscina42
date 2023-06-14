/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:09:46 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:09:06 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = '0';
	while (*str != '\0')
	{	
		str++;
		i++;
	}
	write(1, &i, 1);
}


int	main(void)
{
	char	input[] = "voilaalksdhlsjahdksjaghdksjad";
	char	*string = &input[0];

	ft_putstr(string);
	return (0);
}
