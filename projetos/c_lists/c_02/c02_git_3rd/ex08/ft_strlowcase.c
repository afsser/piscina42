/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:46:40 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/07 13:31:46 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	str[16] = "12ASDuBCGaAzZ`{";

// 	src = str;
// 	printf ("a frase era: %s\n", src);
// 	ft_strlowcase(src);
// 	printf ("agora a frase é: %s\n", str);
// 	return (0);
// }
