/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:57:16 by tbohn-co          #+#    #+#             */
/*   Updated: 2023/06/12 19:20:21 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	in_alphanumeric(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	return (0);
}

void	lower_to_uppercase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

void	upper_to_lowercase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	first = 1;
	i = 0;
	while (str[i])
	{
		if (in_alphanumeric(str, i))
		{
			if (first)
			{
				lower_to_uppercase(str, i);
				first = 0;
			}
			else
				upper_to_lowercase(str, i);
		}
		else
			first = 1;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	a[60] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	int 	i = -1;

	ft_strcapitalize(a);
	while (++i < 60)
	{
		printf("%c", a[i]);
	}
}
