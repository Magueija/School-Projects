/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:01:14 by tosilva           #+#    #+#             */
/*   Updated: 2020/10/28 18:26:00 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char num1[3], char num2[3], bool last)
{
	write(1, num1, 2);
	write(1, " ", 1);
	write(1, num2, 2);
	if (!last)
		write(1, ", ", 2);
}

void	ft_chattoint(int n, char *c)
{
	int		i;

	if (n < 9)
		c[0] = '0';
	if (n == 0)
		c[1] = '0';
	else
	{
		i = 1;
		while (n)
		{
			c[i] = (n % 10) + '0';
			n /= 10;
			i--;
		}
	}
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	n1[3];
	char	n2[3];

	num1 = -1;
	while (++num1 <= 99)
	{
		num2 = -1;
		while (++num2 <= 99)
		{
			if (num1 == 98 && num2 == 99)
				ft_putchar("98", "99", true);
			else if (num1 != num2 && num1 < num2)
			{
				ft_chattoint(num1, n1);
				ft_chattoint(num2, n2);
				ft_putchar(n1, n2, false);
			}
		}
	}
}
