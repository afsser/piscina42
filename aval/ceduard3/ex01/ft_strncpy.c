/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:38:58 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:21:31 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && (i < n))
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
			dest [i] = '\0';
			i++;
	}
	return (dest);
}

int main(void) 
{
  char dest[10];
  char *src = "22222";

  printf("%s", ft_strncpy(dest ,src, 3));
  return 0;
}

