/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:46:46 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/27 17:11:51 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imprime(int diga, int digb, int digc, int digd)
{
	ft_putchar(diga);
	ft_putchar(digb);
	ft_putchar(' ');
	ft_putchar(digc);
	ft_putchar(digd);
	if (diga != 57 || digb != 56 || digc != 57 || digd != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_while(int diga, int digb, int digc, int digd)
{
	while (digc < 58)
	{
		while (digd < 58)
		{
			ft_imprime(diga, digb, digc, digd);
			digd++;
		}
		if (digc == 57)
		{
			digd--;
			ft_imprime(diga, digb, digc, digd);
		}
		digd = digc + 2;
		digc++;
	}
	digc = digb;
	digd = digb + 2;
}

void	ft_print_comb2(void)
{
	int	diga;
	int	digb;
	int	digc;
	int	digd;

	diga = 48;
	digb = 48;
	digc = 48;
	digd = 49;
	while (diga < 57)
	{
		while (digb < 58)
		{
			ft_while(diga, digb, digc, digd);
			digb++;
		}
		digb = diga + 2;
		digc = diga + 1;
		digd = digc + 2;
		diga++;
	}
	digb -= 2;
	digd -= 2;
	ft_imprime(diga, digb, digc, digd);
}

int main(void)
{
	ft_print_comb2();
	return 0;
}

