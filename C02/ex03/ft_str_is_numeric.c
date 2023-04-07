/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:17:27 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/13 17:23:25 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char alpha[] = "1234567890";
	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* 1234";
	char empty[] = "";

	printf("%s = %d\n", alpha, ft_str_is_numeric(alpha));
	printf("%s = %d\n", special, ft_str_is_numeric(special));
	printf("Empty = %d\n", ft_str_is_numeric(empty));
	return (0);
}*/
