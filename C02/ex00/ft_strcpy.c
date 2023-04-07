/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:00:35 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/13 12:03:20 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	source[] = "Bazinga";
	char	destin[] = "I'm Batman";
	char	*dest;

	printf("Original src: %s dest: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("Depois src:%s dest: %s\n", source, destin);
	return (0);
}*/
