/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:38:40 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/10 19:02:42 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int len;

	len = ft_strlen(str);
	write(1, str, len);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
	return (0);
}
