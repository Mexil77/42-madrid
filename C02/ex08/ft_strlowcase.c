/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:38:59 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/01 21:05:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
		i++;
	}
	str -= i;
	return (str);
}