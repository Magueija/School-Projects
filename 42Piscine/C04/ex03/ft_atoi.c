/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:39:49 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 21:32:44 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
