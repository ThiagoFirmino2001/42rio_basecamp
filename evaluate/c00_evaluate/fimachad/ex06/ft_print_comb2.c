/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:58:43 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/11 21:21:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			num2++;
			if (num1 != 98)
				write(1, ", ", 2);
		}
		num1++;
	}
}

int	main(void)
{
 	ft_print_comb2();
	return (0);
}
