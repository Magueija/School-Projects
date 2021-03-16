/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:23:26 by tosilva           #+#    #+#             */
/*   Updated: 2020/10/25 19:08:46 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hei;
	int wid;

	hei = 0;
	while (hei < y)
	{
		wid = 0;
		while (wid < x)
		{
			if (wid == 0 && (hei == 0 || hei == (y - 1)))
				ft_putchar('A');
			else if (wid == (x - 1) && (hei == 0 || hei == (y - 1)))
				ft_putchar('C');
			else if (wid == 0 || wid == (x - 1) || hei == 0 || hei == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			wid++;
		}
		write(1, "\n", 1);
		hei++;
	}
}
