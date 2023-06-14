/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:13:58 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/11 18:36:15 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	number_strstr(DICT)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return ((void *)0);
}
