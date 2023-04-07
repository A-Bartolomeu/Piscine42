/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:15:28 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/20 10:46:16 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	sa[] = "Bazinga";
	char	sb[] = "Bazinga";
	int	result;
	unsigned int	n;

	n = 3;
	result = ft_strncmp(sa, sb, n);
	printf("%d\n", result);
	return (0);
}*/
