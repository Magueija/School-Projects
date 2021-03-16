/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:18:43 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 18:20:32 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

short	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

short	ft_issignal(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

short	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int impar;
	int num;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	impar = 1;
	while (ft_issignal(str[i]))
	{
		if (str[i] == '-')
			impar *= -1;
		i++;
	}
	num = 0;
	if (ft_isnum(str[i]))
	{
		while (ft_isnum(str[i]))
		{
			num = (num * 10) + ((int)(str[i] - '0'));
			i++;
		}
	}
	return (num * impar);
}
