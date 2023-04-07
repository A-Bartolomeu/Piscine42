/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:38:42 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/16 13:16:15 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_put_hexa(char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_put_hexa(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	char	src[] = "Ola\nesta bem?";

	printf("Original src: Ola\\nesta bem?\n");
	ft_putstr_non_printable(src);
	printf("\n");
	return (0);
}*/
