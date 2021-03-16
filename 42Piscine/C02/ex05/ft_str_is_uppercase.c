/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:46:11 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 12:16:24 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_upper(*str))
			return (0);
		str++;
	}
	return (1);
}
