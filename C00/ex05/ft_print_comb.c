/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:42:30 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/26 21:12:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imprime(int diga, int digb, int digc)
{
	ft_putchar(diga);
	ft_putchar(digb);
	ft_putchar(digc);
	if (diga != 55 || digb != 56 || digc != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	diga;
	int	digb;
	int	digc;

	diga = 48;
	digb = 49;
	digc = 50;
	while (diga < 56)
	{
		while (digb < 57)
		{
			while (digc < 58)
			{
				ft_imprime(diga, digb, digc);
				digc++;
			}
			digc = digb + 2;
			digb++;
		}
		digb = diga + 1;
		diga++;
	}
}
