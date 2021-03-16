/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:49:47 by mchaveir          #+#    #+#             */
/*   Updated: 2020/10/25 19:21:56 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int hei;
	int	wid;

	hei = 0;
	while (hei < y)
	{
		wid = 0;
		while (wid < x)
		{
			if ((wid == 0 && hei == 0)
					|| ((wid == x - 1 && hei == y - 1) && (y > 1 && x > 1)))
				ft_putchar('A');
			else if ((wid == x - 1 && hei == 0) || (wid == 0 && hei == y - 1))
				ft_putchar('C');
			else if (wid > 0 && wid < x - 1 && hei != 0 && hei != y - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			wid++;
		}
		write(1, "\n", 1);
		hei++;
	}
}
