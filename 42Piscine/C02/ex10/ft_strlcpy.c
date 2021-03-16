/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:07:40 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/03 14:00:21 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int sz;

	sz = size;
	i = 0;
	if (sz > 0)
	{
		while (--sz != 0)
		{
			if ((dest[i] = src[i]) == '\0')
				break ;
			i++;
		}
	}
	if (sz == 0)
	{
		if (size != 0)
			dest[i] = '\0';
		while (src[i] != '\0')
			i++;
	}
	return (i);
}
