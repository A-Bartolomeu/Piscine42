/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:24:12 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/12 18:47:19 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
    int	tab[] = {1, 2, 3, 4, 5, 6, 7};
    int	size = 7;

    printf("Original array: ");
    int	i = 0;
    while (i < size) {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(tab, size);
    printf("Reversed array: ");
    i = 0;
    while (i < size) {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/
