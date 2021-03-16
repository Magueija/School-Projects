/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:46:11 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 13:05:38 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_visiblechar(char a)
{
	if (a >= 32 && a <= 127)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_visiblechar(*str))
			return (0);
		str++;
	}
	return (1);
}
