/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:30:58 by ceduard3          #+#    #+#             */
/*   Updated: 2023/06/07 13:19:30 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int        main(void)
{
    char source[] = "oi";
    char destin[] = "tudo bem";
    char *dest;

    printf("Antes\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

    printf("Depois\n\tsrc: %s\n\tdes: %s\n", source, dest);
    return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src [n] != '\0')
	{
		dest [n] = src [n];
		n++;
	}
	dest [n] = '\0';
	return (dest);
}
