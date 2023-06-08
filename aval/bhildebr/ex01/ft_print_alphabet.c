/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:36:57 by bhildebr          #+#    #+#             */
/*   Updated: 2023/06/06 18:50:10 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

void	ft_print_alphabet(void)
{
	write(STDOUT_FILENO, ALPHABET, 26);
}

int main (void)
{
	ft_print_alphabet();
}