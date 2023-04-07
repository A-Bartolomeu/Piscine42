/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:28:05 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/23 14:57:16 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 20)))
			return (0);
		i += 6;
	}
	return (1);
}

/*int	main(void)
{
	printf ("%d | %d\n", -12, ft_is_prime(-12));
	printf ("%d | %d\n", 0, ft_is_prime(0));
	printf ("%d | %d\n", 1, ft_is_prime(1));
	printf ("%d | %d\n", 2, ft_is_prime(2));
	printf ("%d | %d\n", 3, ft_is_prime(3));
	printf ("%d | %d\n", 5, ft_is_prime(5));
	printf ("%d | %d\n", 7, ft_is_prime(7));
	printf ("%d | %d\n", 11, ft_is_prime(11));
	printf ("%d | %d\n", 13, ft_is_prime(13));
	printf ("%d | %d\n", 14, ft_is_prime(14));
}*/
