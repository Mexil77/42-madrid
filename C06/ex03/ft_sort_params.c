/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:12:29 by emgarcia          #+#    #+#             */
/*   Updated: 2021/07/13 21:56:49 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
}

void	ft_swipe_pointers(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_check_equals(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			if (a[i] > b[i])
				return (0);
			else
				return (1);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		term;
	int		cont;

	term = 0;
	cont = 1;
	while (term == 0)
	{
		term = 1;
		while (cont < argc - 1)
		{
			if (ft_check_equals(argv[cont], argv[cont + 1]) == 0)
			{
				ft_swipe_pointers(&argv[cont], &argv[cont + 1]);
				term = 0;
			}
			cont++;
		}
		cont = 1;
	}
	ft_print_params(argc, argv);
	return (0);
}
