/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:46:24 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 13:02:38 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

short	ft_is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
