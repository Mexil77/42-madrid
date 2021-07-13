/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:38:08 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/05 20:30:09 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (size > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
		size--;
	}
	*dest = '\0';
	dest -= i;
	return (i);
}
