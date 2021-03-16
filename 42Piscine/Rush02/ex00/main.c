/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:42:27 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/08 21:41:52 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

short	ft_error(int error_type)
{
	if (error_type)
		write(1, "Dict Error\n", 11);
	else
		write(1, "Error\n", 6);
	return (0);
}

short	ft_verify_arguments(char *num, char *dict)
{
	int fd;

	while (*num)
	{
		if (!ft_isnum(*num) && !ft_issignal(*num))
			return (ft_error(0));
		num++;
	}
	if ((fd = open(dict, O_RDONLY)) == -1)
		return (ft_error(1));
	if (close(fd) == -1)
		return (ft_error(1));
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_verify_arguments(argv[1], "numbers.dict"))
			ft_translate_num(argv[1], "numbers.dict");
	}
	else if (argc == 3)
	{
		if (ft_verify_arguments(argv[2], argv[1]))
			ft_translate_num(argv[2], argv[1]);
	}
	else
		return (ft_error(0));
	return (0);
}
