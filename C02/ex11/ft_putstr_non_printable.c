/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:21:06 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/01 21:08:17 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imp_esp(unsigned char c)
{
	int	d1;
	int	d2;

	d1 = c / 16;
	d2 = c % 16;
	ft_putchar('\\');
	if (d1 > 9)
		ft_putchar(d1 + 87);
	else
		ft_putchar(d1 + 48);
	if (d2 > 9)
		ft_putchar(d2 + 87);
	else
		ft_putchar(d2 + 48);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	a;

	while (*str != '\0')
	{
		a = *str;
		if (*str < 32 || *str > 126)
			ft_imp_esp(a);
		else
			ft_putchar(a);
		str++;
	}
}
