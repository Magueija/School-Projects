/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:47:17 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/08 21:42:01 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int		ft_strlen(char *str)
{
	int s;

	s = 0;
	while (str[s])
		s++;
	return (s);
}

int		ft_strlen_nb(char *str)
{
	int s;
	int len;

	s = 0;
	len = 0;
	while (str[s])
	{
		if (str[s] == '0' && len == 0)
			;
		else
			len++;
		s++;
	}
	return (len == 0 ? 1 : len);
}

void	ft_putstr(char str[])
{
	int len;

	len = ft_strlen(str);
	write(1, str, len);
}

int		ft_strcmp(char *num, char **str, int max_len, int nr_ln)
{
	int ndex;
	int sdex;

	if (nr_ln == max_len)
		return (-1);
	ndex = 0;
	sdex = 0;
	while (num[ndex] == str[nr_ln][sdex] && num[ndex] != '\0')
	{
		ndex++;
		sdex++;
	}
	if (ft_strlen_nb(num) == ndex)
		return (nr_ln);
	else
		return (ft_strcmp(num, str, max_len, nr_ln + 1));
	return (-1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
