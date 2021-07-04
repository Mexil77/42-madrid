/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:40:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/28 20:56:14 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	stop;
	int	*ultimo;
	int	*detener;

	if (size % 2 == 0)
		stop = (size / 2) - 1;
	else
		stop = size / 2;
	ultimo = tab + (size - 1);
	detener = tab + stop;
	while (tab != detener)
	{
		ft_swap(tab, ultimo);
		tab++;
		ultimo--;
	}	
}
