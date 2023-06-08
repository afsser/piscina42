/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:42:49 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/04 18:15:14 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern char	*g_arg;
extern char	g_row_p[24][4];
extern char	g_matrix[4][4];

void	generate_rows(void);
int		generate_matrix(void);
int		input_check(int argc);

int	main(int argc, char **argv)
{
	g_arg = argv[1];
	generate_rows();
	if (input_check(argc) != 1)
	{
		write(1, "Error\n", 6);
	}
	else if (generate_matrix() != 1)
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
