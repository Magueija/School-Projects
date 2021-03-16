/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:38:52 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 17:20:39 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_writespaces(int n, char c[])
{
	if (n == 1 && c[0] != '9')
		write(1, ", ", 2);
	else if (n == 2 && !(c[0] == '8' && c[1] == '9'))
		write(1, ", ", 2);
	else if (n == 3 && !(c[0] == '7' && c[1] == '8' && c[2] == '9'))
		write(1, ", ", 2);
	else if (n == 4 && !(c[0] == '6' && c[1] == '7' && c[2] == '8'
				&& c[3] == '9'))
		write(1, ", ", 2);
	else if (n == 5 && !(c[0] == '5' && c[1] == '6' && c[2] == '7'
				&& c[3] == '8' && c[4] == '9'))
		write(1, ", ", 2);
	else if (n == 6 && !(c[0] == '4' && c[1] == '5' && c[2] == '6'
				&& c[3] == '7' && c[4] == '8' && c[5] == '9'))
		write(1, ", ", 2);
	else if (n == 7 && !(c[0] == '3' && c[1] == '4' && c[2] == '5'
				&& c[3] == '6' && c[4] == '7' && c[5] == '8' && c[6] == '9'))
		write(1, ", ", 2);
	else if (n == 8 && !(c[0] == '2' && c[1] == '3' && c[2] == '4'
				&& c[3] == '5' && c[4] == '6' && c[5] == '7'
				&& c[6] == '8' && c[7] == '9'))
		write(1, ", ", 2);
	else if (n == 9 && !(c[0] == '1' && c[1] == '2' && c[4] == '5'
				&& c[7] == '8' && c[8] == '9'))
		write(1, ", ", 2);
}

void	ft_putchar(int s, char p[])
{
	char	*check;
	int		i;
	int		j;
	int		equal;

	check = (char *)malloc((s + 1) * sizeof(char));
	i = -1;
	while (++i < s)
	{
		equal = 0;
		j = -1;
		while (check[++j] != '\0')
		{
			if (check[j] == p[i] || check[j] > p[i])
				equal = 1;
		}
		if (equal == 0)
			check[i] = p[i];
		else
			return ;
	}
	write(1, check, s);
	ft_writespaces(s, check);
}

int		ft_exponent(int e)
{
	int		i;
	int		nr;

	nr = 1;
	i = -1;
	while (++i < (9 - e))
		nr *= 10;
	return (nr);
}

void	ft_chartoint(int nr, char *c, int size)
{
	int		i;

	i = -1;
	while (++i < size)
	{
		c[i] = '\0';
	}
	while (nr)
	{
		c[i - 1] = (nr % 10) + '0';
		i--;
		nr /= 10;
	}
	i = -1;
	while (c[++i] == '\0')
		c[i] = '0';
	ft_putchar(size, c);
}

void	ft_print_combn(int n)
{
	char	*num;
	int		maxnum;
	int		i;

	num = (char *)malloc((n + 1) * sizeof(char)); 
	if (0 < n && n < 10)
	{
		maxnum = ft_exponent(n);
		maxnum = 987654321 / maxnum;
		i = -1;
		while (++i <= maxnum)
		{
			ft_chartoint(i, num, n);
		}
	}
}
