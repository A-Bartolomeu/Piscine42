/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:21:46 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/13 14:55:33 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Look! I caught a butterfly!";
	char	dest[] = "If people could put rainbows in zoos, they'd do it";
	unsigned int n;

	n = 30;
	printf("Original src: %s dest: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("Depois src:%s dest: %s\n", src, dest);
	return (0);
}*/
