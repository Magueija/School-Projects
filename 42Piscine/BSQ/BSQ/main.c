/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:44:20 by mvaldeta          #+#    #+#             */
/*   Updated: 2020/11/11 22:57:45 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		;
	else if (argc > 1)
		while (++i < argc)
			ft_verify_map(argv[i]);
	return (0);
}
