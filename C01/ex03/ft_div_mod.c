/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:19:23 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/08 19:24:56 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 12;
	b = 10;
	printf("a : %i | b : %i \n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %i | mod: %i", div, mod);
	return (0);
}*/
