/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:29:22 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/09 13:53:15 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_solution(int *a)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(a[i] + 48);
		i++;
	}
	ft_putchar(10);
}

int	ft_rev(int *a, int i, int j)
{
	int	k;
	int	resta1;
	int	resta2;

	if (i == 0)
		return (1);
	k = i - 1;
	while (k >= 0)
	{
		if (j == a[k] || j + i == a[k] + k)
			return (0);
		resta1 = j - i;
		resta2 = a[k] - k;
		if (resta1 < 0)
			resta1 *= -1;
		if (resta2 < 0)
			resta2 *= -1;
		if (resta1 == resta2)
			return (0);
		k--;
	}
	return (1);
}

void	ft_solve_queens(int *a, int i, int *tot)
{
	int	j;
	int	revisado;

	j = 0;
	while (j < 10)
	{
		revisado = ft_rev(a, i, j);
		if (revisado == 1)
		{
			a[i] = j;
			if (i < 9)
				ft_solve_queens(a, i + 1, tot);
			else
			{
				*tot += 1;
				ft_print_solution(a);
				break ;
			}
			a[i] = 0;
		}
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	a[10];
	int	i;
	int	total;
	int	*punt_total;

	i = 0;
	total = 0;
	punt_total = &total;
	while (i < 10)
	{
		a[i] = 0;
		i++;
	}
	i = 0;
	ft_solve_queens(a, i, punt_total);
	return (total);
}
