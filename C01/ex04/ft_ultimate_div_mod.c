/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:48:04 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/08 20:13:31 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	}
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 10;
	printf("a : %i | b : %i \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div: %i | mod: %i", a, b);
	return (0);
}*/
