/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:49:37 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/15 20:04:49 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* 1234";
	char empty[] = "";

	printf("%s = %d\n", alpha, ft_str_is_uppercase(alpha));
	printf("%s = %d\n", special, ft_str_is_uppercase(special));
	printf("Empty = %d\n", ft_str_is_uppercase(empty));
	return (0);
}*/
