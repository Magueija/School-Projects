/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:14:29 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 18:47:54 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_num(int nb, char *base, int *bs_size)
{
	unsigned int num;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		num = nb * -1;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		num = nb * -1;
	}
	else
		num = nb;
	if (num != 0)
	{
		if ((num / *bs_size) != 0)
			ft_write_num((num / *bs_size), base, bs_size);
		ft_putchar(base[(num % *bs_size)]);
	}
	else
		ft_putchar('0');
}

short	ft_valid_base(char *arr, int *size)
{
	char	*arr_copy;
	int		i;

	arr_copy = arr;
	*size = 0;
	while (arr[*size])
	{
		if (arr[*size] == '+' || arr[*size] == '-')
			return (0);
		i = -1;
		while (arr_copy[++i])
			if (i != *size)
				if (arr_copy[i] == arr[*size])
					return (0);
		*size += 1;
	}
	if (*size > 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	if (ft_valid_base(base, &base_size))
	{
		ft_write_num(nbr, base, &base_size);
	}
}
