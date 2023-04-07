/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:26 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/14 11:50:34 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97) && (str[c] <= 122))
			str[c] -= 97 - 65;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char allcase[] = "ABC def";

	printf("%s\n", ft_strupcase(lowercase));
	printf("%s\n", ft_strupcase(allcase));
	return (0);
}*/
