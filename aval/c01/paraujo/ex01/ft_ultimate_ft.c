/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:32:20 by paraujo           #+#    #+#             */
/*   Updated: 2023/06/14 14:04:24 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//desreferenciar com ponteiros.
//os * indicam "o nivel" do ponteiro. 
//Nivel de referencia em relacao ao ponteiro inicial.
//nbr é a variável int que vai armazenar o valor mesmo.
// -> se int a e int *nbr, nbr = &a.
// nbr8 = &nbr7;
// nbr7 = &nbr6;
// nbr6 = &nbr5;
// nbr5 = &nbr4;
// nbr4 = &nbr3;
// nbr3 = &nbr2;
// nbr2 = &nbr1;
// nbr1 = &nbr0;
// nbr0 = &nbr;
// nbr = 42;
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int	main(void)
{
	int	number;
	int	*number0;
	int	**number1;
	int	***number2;
	int	****number3;
	int	*****number4;
	int	******number5;
	int	*******number6;
	int	********number7;
	int	*********number8;

	number = 42;
	number0 = &number;
	number1 = &*number0;
	number2 = &**number1;
	number3 = &***number2;
	number4 = &****number3;
	number5 = &*****number4;
	number6 = &******number5;
	number7 = &*******number6;
	number8 = &********number7;
	write(1, *********number8, 1);
	ft_ultimate_ft(*********number8);
	write(1, *********number8, 1);
	return (0);
}

