/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:35:18 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/21 19:41:10 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*int	main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
	printf("-3 ^ 3 = %d (-27)\n", ft_iterative_power(-3, 3));
	printf(" 0 ^-1 = %d (0)\n", ft_iterative_power(0, -1));
	printf(" 0 ^ 0 = %d (1)\n", ft_iterative_power(0, 0));
	printf(" 0 ^ 2 = %d (0)\n", ft_iterative_power(0, 2));
	printf(" 4 ^-1 = %d (0)\n", ft_iterative_power(4, -1));
	printf(" 4 ^ 0 = %d (1)\n", ft_iterative_power(4, 0));
	printf(" 4 ^ 1 = %d (4)\n", ft_iterative_power(4, 1));
	printf(" 4 ^ 2 = %d (16)\n", ft_iterative_power(4, 2));
	printf(" 4 ^ 3 = %d (64)\n", ft_iterative_power(4, 3));
}*/
