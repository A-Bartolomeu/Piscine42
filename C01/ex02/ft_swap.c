/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:51:50 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/08 19:23:00 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("a: %i b: %i \n", a, b);
	ft_swap(&a, &b);
	printf("a: %i b: %i", a, b);
	return (0);
}*/
