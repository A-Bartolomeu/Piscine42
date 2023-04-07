/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:16:08 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/08 20:51:54 by andrgonc         ###   ########.fr       */
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
}

/*int	main(void)
{
	char	str[] = "Unicorn power";
	ft_putstr(str);
	return(0);
}*/
