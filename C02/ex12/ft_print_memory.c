/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:25:41 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/01 21:10:07 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imp_hex(unsigned char c, int i)
{
	int	d1;
	int	d2;

	if (i == 0)
	{
		d1 = c / 16;
		d2 = c % 16;
		if (d1 > 9)
			ft_putchar(d1 + 87);
		else
			ft_putchar(d1 + 48);
		if (d2 > 9)
			ft_putchar(d2 + 87);
		else
			ft_putchar(d2 + 48);
	}
	else
	{
		ft_putchar(32);
		ft_putchar(32);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0' && i < 16)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
			ft_putchar(46);
		str++;
		i++;
	}
}

void	ft_putaddr(void *addr)
{
	int		i;
	char	addr_c[16];
	long	addr_l;

	addr_l = (long)addr;
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16;
		addr_l /= 16;
		i++;
	}
	while (i < 16)
		addr_c[i++] = 0;
	while (--i >= 0)
	{
		if (addr_c[i] < 10)
			ft_putchar(addr_c[i] + '0');
		else
			ft_putchar(addr_c[i] + 'W');
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (size > 0)
	{
		while (j < 16)
		{
			if (*(char *)addr == '\0')
				i = 1;
			if (j == 0)
				ft_putaddr(addr);
			ft_imp_hex(*(unsigned char *)addr, i);
			if (j % 2 == 1)
				ft_putchar(' ');
			addr++;
			j++;
		}
		ft_putstr(addr);
		j = 0;
		i = 0;
		size -= 16;
	}
	return (addr);
}
