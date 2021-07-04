/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:37:40 by emgarcia          #+#    #+#             */
/*   Updated: 2021/06/26 21:12:36 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	abcchar;

	abcchar = 122;
	while (abcchar > 96)
	{
		write(1, &abcchar, 1);
		abcchar--;
	}
}
