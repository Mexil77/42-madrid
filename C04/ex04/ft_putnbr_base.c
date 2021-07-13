/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:00:44 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/08 19:01:48 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 43 || str[i] == 45)
			return (-1);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
		j = i + 1;
	}
	if (i == 0 || i == 1)
		return (-1);
	else
		return (i);
}

int	ft_pow(int base, int pow)
{
	int	i;
	int	base_orig;

	if (pow == 0)
		return (1);
	i = 1;
	base_orig = base;
	while (i < pow)
	{
		base *= base_orig;
		i++;
	}
	return (base);
}

void	ft_imp_nums(int nbr, int max_pow, int base, char *base_c)
{
	int	imp;

	imp = 0;
	max_pow--;
	while (nbr > 0 || max_pow >= 0)
	{
		imp = nbr / ft_pow(base, max_pow);
		ft_putchar(base_c[imp]);
		nbr = nbr - (imp * ft_pow(base, max_pow));
		max_pow--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count;
	int	max_pow;
	int	ultimo;

	max_pow = 0;
	ultimo = 0;
	if (ft_strlen(base) == -1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			nbr = (nbr / 10) * (-1);
			ultimo = 1;
		}
		else
			nbr *= -1;
	}
	count = nbr;
	while (count > 0 && ++max_pow)
		count /= ft_strlen(base);
	ft_imp_nums(nbr, max_pow, ft_strlen(base), base);
	if (ultimo == 1)
		ft_imp_nums(8, 1, ft_strlen(base), base);
}
