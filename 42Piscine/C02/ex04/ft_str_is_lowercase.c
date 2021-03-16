/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:46:11 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 12:14:15 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_is_lower(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lower(*str))
			return (0);
		str++;
	}
	return (1);
}
