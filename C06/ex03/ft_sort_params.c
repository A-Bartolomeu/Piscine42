/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:40 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/21 16:30:03 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	len = argc;
	while (len - 1)
	{
		i = 0;
		j = 1;
		while (j < len)
		{
			if (ft_strcmp (argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			++i;
			++j;
		}
		--len;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		++i;
	}
	return (0);
}
