/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:45:23 by gifranci          #+#    #+#             */
/*   Updated: 2023/06/13 19:41:38 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		f = 0;
		while ((str[s + f] == to_find[f]) && (str[s + f] != '\0'))
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[s]);
			}
			f++;
		}
		s++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	*the_big_line;
	char	*the_small_line;
	the_big_line = "991299199123491239912345999";
	the_small_line = "12345";

	printf("point of contact: %s\n", ft_strstr(the_big_line, the_small_line));
	return (0);
}
