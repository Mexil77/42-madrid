/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:40:36 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/05 20:31:48 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		result = *s1 - *s2;
		if (*s1 > *s2)
			return (result);
		else if (*s1 < *s2)
			return (result);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
