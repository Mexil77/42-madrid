/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:43:33 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/28 20:56:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}