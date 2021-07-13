/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:13:41 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/12 21:22:04 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	return (0);
}

int	ft_char_is_num(char str)
{
	if ((str >= 48 && str <= 57))
		return (1);
	return (0);
}

int	ft_char_is_lowercae(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	primera;

	primera = 1;
	while (*str != '\0')
	{
		if (primera == 1)
		{
			if (ft_char_is_alpha(*str) == 1)
				if (ft_char_is_lowercae(*str) == 1)
					*str -= 32;
			primera = 0;
		}
		else
		{
			if (ft_char_is_alpha(*str) == 1)
				if (ft_char_is_lowercae(*str) == 0)
					*str += 32;
		}
		if ((ft_char_is_alpha(*str) == 0) && (ft_char_is_num(*str) == 0))
			primera = 1;
		str++;
	}
	return (str);
}
