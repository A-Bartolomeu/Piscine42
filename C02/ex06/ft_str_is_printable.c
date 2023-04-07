/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:54:22 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/13 19:22:20 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char alpha[] = "ABC abc \'\"(){}[]!?@#$&* 1234";
	char special[] = "\t (tab), \a (?)";
	char empty[] = "";

	printf("%s = %d\n", alpha, ft_str_is_printable(alpha));
	printf("%s = %d\n", special, ft_str_is_printable(special));
	printf("Empty = %d\n", ft_str_is_printable(empty));
	return (0);
}*/
