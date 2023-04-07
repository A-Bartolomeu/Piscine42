/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:53:28 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/14 11:59:26 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65) && (str[c] <= 90))
			str[c] += 97 - 65;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char allcase[] = "ABC def";

	printf("%s\n", ft_strlowcase(uppercase));
	printf("%s\n", ft_strlowcase(allcase));
	return (0);
}*/
