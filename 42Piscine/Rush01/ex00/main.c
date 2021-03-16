/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:04:20 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 20:27:36 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_error(int error_type);
short	ft_sudoka(char *postions);

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2 && argv[1][0] != '\0')
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
				|| (i % 2 != 0 && argv[1][i] != ' '))
				ft_error(0);
			i++;
		}
		if (i != 31)
			ft_error(0);
		ft_sudoka(argv[1]);
	}
	else
		ft_error(0);
	return (0);
}
