/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:39:32 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/16 17:14:37 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	sa[] = "Bazinga";
	char	sb[] = "testeBazinga";
	int	result;

	result = ft_strcmp(sa, sb);
	printf("%d\n", result);
	return (0);
}*/
