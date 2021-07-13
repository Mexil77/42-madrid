/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:43:25 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/05 20:30:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[i])
		{
			while (to_find[i] != '\0' && str[j + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str += j);
			i = 0;
		}
		j++;
	}
	return (NULL);
}
