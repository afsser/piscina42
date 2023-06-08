/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:54:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:51:02 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define NUMBERS "0123456789"

void	ft_print_numbers(void)
{
	write(STDOUT_FILENO, NUMBERS, 10);
}

int main (void)
{
	ft_print_numbers();
}