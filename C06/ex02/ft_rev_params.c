/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:50:11 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/21 13:02:12 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str++;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (--argc)
		ft_putstr(argv[argc]);
}
