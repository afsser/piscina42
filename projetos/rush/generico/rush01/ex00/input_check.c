/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:05:46 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/04 18:15:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	*g_arg;

int	input_check(int argc)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	while (g_arg[i] != '\0')
	{
		if (i > 30)
			return (0);
		if (i % 2 == 0)
		{
			if (g_arg[i] < '1' || g_arg[i] > '4')
				return (0);
		}
		else
		{
			if (g_arg[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}
