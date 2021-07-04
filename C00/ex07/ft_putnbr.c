/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:25:08 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/27 17:10:04 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	valid;
	int	otra;

	otra = nb;
	if (nb < 0)
		nb *= -1;
	valid = nb / 10;
	if (valid == 0)
	{
		if (otra < 0)
			ft_putchar('-');
		ft_putchar(nb += 48);
	}
	else
	{
		if (otra < 0)
			ft_putnbr(otra / 10);
		else
			ft_putnbr(valid);
		if (((nb % 10) + 48) == 40)
			ft_putchar(56);
		else
			ft_putchar((nb % 10) + 48);
	}
}
