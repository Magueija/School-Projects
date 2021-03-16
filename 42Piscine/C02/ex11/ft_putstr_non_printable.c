/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:24:06 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 13:51:17 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

short	ft_is_visible(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_write_hexa(char c)
{
	int		neg_char;
	char	hex1;
	char	hex2;

	ft_putchar('\\');
	if (c < 0)
	{
		neg_char = (-128 - (c)) * -1 + 128;
		hex1 = neg_char / 16;
		hex2 = neg_char % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[16];
	int		i;
	char	val;

	i = 0;
	val = '0';
	while (++i < 16)
	{
		hex[i] = val;
		val = (val == '9') ? 'a' : (val + 1);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_visible(str[i]))
			ft_write_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
