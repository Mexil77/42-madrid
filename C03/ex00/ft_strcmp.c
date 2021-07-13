/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:28:17 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/05 20:32:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		result = *s1 - *s2;
		if (*s1 > *s2)
			return (result);
		else if (*s1 < *s2)
			return (result);
		s1++;
		s2++;
	}
	return (0);
}
