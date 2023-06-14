/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:24:03 by pedanton          #+#    #+#             */
/*   Updated: 2023/06/14 13:17:56 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  strcpy()  function  copies the string pointed to by src, including
//the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
//The  strings  may  not overlap, and the destination string dest must be
//large enough to receive the copy.  Beware  of  buffer  overruns!

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[100];
	char	src[] = "Confie no processo, abiguinho!";

	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s", dest);

	return (0);
}
