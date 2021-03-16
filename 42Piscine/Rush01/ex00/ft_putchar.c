/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:17:45 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 19:09:45 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern char		**g_tbl;
extern char		**g_pos;

void	ft_error(int error_type)
{
	free(g_tbl);
	g_tbl = NULL;
	free(g_pos);
	g_pos = NULL;
	if (!error_type)
		write(1, "Error", 5);
	else
		write(1, "No solution available", 21);
	write(1, "\n", 1);
	exit(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
