/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:50:27 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/28 20:56:19 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	terminado;
	int	*sig;
	int	contador;

	terminado = 0;
	contador = 0;
	sig = tab + 1;
	while (terminado == 0)
	{
		terminado = 1;
		while (contador < size - 1)
		{
			if (*tab > *sig)
			{
				terminado = 0;
				ft_swap(tab, sig);
			}
			tab++;
			sig++;
			contador++;
		}
		contador = 0;
		tab -= (size - 1);
		sig -= (size - 1);
	}
}
