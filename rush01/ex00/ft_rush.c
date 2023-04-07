/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:08:40 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/12 14:11:56 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_rush(void)
{
	char	*row_0;
	char	*row_1;
	char	*row_2;
	char	*row_3;

	row_0 = "1 2 3 4";
	row_1 = "2 3 4 1";
	row_2 = "3 4 1 2";
	row_3 = "4 1 2 3";
	ft_putstr(row_0);
	ft_putchar('\n');
	ft_putstr(row_1);
	ft_putchar('\n');
	ft_putstr(row_2);
	ft_putchar('\n');
	ft_putstr(row_3);
	ft_putchar('\n');
}
