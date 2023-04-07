/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:21:45 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/06 17:27:57 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	o;
	char	p;

	o = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &o, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/* MAIN FUNCTION 
int	main(void)
{
	ft_is_negative();
	return (0);
}*/
