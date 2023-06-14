/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:41:03 by pedanton          #+#    #+#             */
/*   Updated: 2023/06/14 13:18:37 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  strncpy()  function is similar, except that at most n bytes of src
//are copied.  Warning: If there is no null byte among the first n  bytes
//of src, the string placed in dest will not be null-terminated.

//If  the  length of src is less than n, strncpy() writes additional null
//bytes to dest to ensure that a total of n bytes are written.

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[100];
	char	src[] = "Eu amo Shell e C!(disse ninguém na história do mundo)";
	int		n;

	n = 10;
	printf("%s\n", src);
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}
