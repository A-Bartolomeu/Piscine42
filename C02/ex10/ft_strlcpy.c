/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:21:37 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/14 15:10:00 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

/*int	main(void)
{
	char	src[] = "Look!";
	char	dest[] = "I caught a butterfly!";
	unsigned int n;

	n = 20;
	printf("Original src: %s dest: %s\n", src, dest);
	ft_strlcpy(dest, src, n);
	printf("Depois src: %s dest: %s\n", src, dest);
	return (0);
}*/
