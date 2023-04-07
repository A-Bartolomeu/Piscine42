/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <andrgonc@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:24:41 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/12 18:10:06 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	sort;
	int	i;
	int	temp;

	sort = 0;
	while (! sort)
	{
		sort = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sort = 0;
			}
			i++;
		}
	}
}

/*int	main(void)
{
    int	tab[] = {22, 3, 7, 25, 32};
    int	size = 5;

    printf("Original array: ");
    int	i = 0;
    while (i < size) {
        printf("%d ,", tab[i]);
        i++;
    }
    printf("\n");
    ft_sort_int_tab(tab, size);
    printf("Reversed array: ");
    i = 0;
    while (i < size) {
        printf("%d ,", tab[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/
