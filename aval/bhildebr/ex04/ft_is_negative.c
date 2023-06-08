/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:56:27 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:52:15 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(STDOUT_FILENO, "N", 1);
	}
	else
	{
		write(STDOUT_FILENO, "P", 1);
	}
}

int main (void)
{
	int c = 20;
	ft_is_negative(c);
}