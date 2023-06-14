/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:59:18 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/12 11:52:07 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	int	found;

	found = 1;
	number = 0;
	sign = 1;
	while (*str && found)
	{
		if (*str == '-')
		{
			sign = sign * -1;
		}
		else if (*str >= '0' && *str <= '9')
		{
			number = (number * 10) + (*str - '0');
		}
		else if (*str == '+' || *str == ' ' || (*str < 14 && *str > 8))
			number = number * 1;
		else
			found = 0;
		str++;
	}
	return (number * sign);
}

int	check_base(char *base)
{
	int	j;
	int	i;

	j = 0;
	while (base[j])
	{
		if (base[j] == '+' || base[j] == '-'
			|| base[j] == ' ' || (base[j] < 14 && base[j] > 8))
			return (0);
		i = 0;
		while (base[i])
		{	
			if (i != j)
			{	
				if (base[i] == base[j])
					return (0);
			}
			i++;
		}
	j++;
	}
	if (j == 1)
		return (0);
	return (j);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	char	result[20];

	i = 0;
	size = check_base(base);
	if (size < 2)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	while (nbr > 0)
	{
		result[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	while (i >= 0)
	{
		i--;
		write(1, &result[i], 1);
	}
}

// int main(void)
// {

// 	ft_atoi("FFF", "0123456 789ABCDEF");
// }