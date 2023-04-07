/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:02:02 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/21 12:29:34 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 97) && (str[c] <= 122))
		{
			str[c] -= 97 - 65;
			i++;
		}
		else if (i > 0 && (str[c] >= 65) && (str[c] <= 90))
			str[c] += 97 - 65;
		else if ((str[c] < 48) || (str[c] > 57 && str[c] < 65)
			|| (str[c] > 90 && str[c] < 97) || (str[c] > 122))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras (quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
