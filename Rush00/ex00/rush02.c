/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:33:51 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/26 14:20:40 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a[2];

	while (a[0] < y)
	{
		while (a[1] < x)
		{
			if ((a[0] == 0 && a[1] == 0) || (a[0] == 0 && a[1] == x - 1))
				ft_putchar('A');
			else if (a[0] == y - 1 && a[1] == 0)
				ft_putchar('C');
			else if (a[0] == y - 1 && a[1] == x - 1)
				ft_putchar('C');
			else if (a[0] == 0 || a[0] == y - 1)
				ft_putchar('B');
			else if (a[1] == 0 || a[1] == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a[1]++;
		}
		ft_putchar(10);
		a[1] = 0;
		a[0]++;
	}
}
