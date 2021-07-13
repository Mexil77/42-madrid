/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:34:57 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/05 20:31:13 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
		nb--;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
