/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:18:32 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/26 21:12:43 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	pos;
	int	neg;

	pos = 80;
	neg = 78;
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}
