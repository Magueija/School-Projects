/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besteves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:58:30 by besteves          #+#    #+#             */
/*   Updated: 2020/10/25 19:05:59 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	hei;
	int	wid;

	hei = 0;
	while (hei < y)
	{
		wid = 0;
		while (wid < x)
		{
			if (hei == 0 && (wid == 0 || wid == x - 1))
				ft_putchar('A');
			else if (hei == (y - 1) && (wid == 0 || wid == x - 1))
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
