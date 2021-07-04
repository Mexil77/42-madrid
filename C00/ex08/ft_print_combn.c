/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:29:06 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/26 21:13:05 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_caso_uno(void)
{
	int	i;

	i = 47;
	while (++i < 57)
	{
		ft_putchar(i);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(57);
}

void	ft_print_array(int *arr, int n)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			c = 0;
		i++;
	}
	if (c != 0)
	{
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
		if (arr[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[9];

	i = 0;
	if (n >= 10 || n <= 0)
		return ;
	if (n == 1)
		ft_caso_uno();
	while (i < n)
		arr[i++] = 0;
	while (arr[0] <= (10 - n) && n > 1)
	{
		ft_print_array(arr, n);
		arr[n - 1]++;
		i = n;
		while (i != 0 && n > 1)
		{
			i--;
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
		}
	}
}
