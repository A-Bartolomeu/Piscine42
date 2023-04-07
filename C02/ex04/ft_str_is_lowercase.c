/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:44:36 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/13 18:48:22 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* 1234";
	char empty[] = "";

	printf("%s = %d\n", alpha, ft_str_is_lowercase(alpha));
	printf("%s = %d\n", special, ft_str_is_lowercase(special));
	printf("Empty = %d\n", ft_str_is_lowercase(empty));
	return (0);
}*/
