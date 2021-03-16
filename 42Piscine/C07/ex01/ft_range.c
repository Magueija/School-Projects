/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:27:59 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 13:28:40 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int	bound;
	int i;

	if (min >= max)
		return (0);
	bound = max - min + 1;
	if (!(res = malloc(sizeof(int) * bound)))
		return (0);
	i = -1;
	while (++i < bound - 1)
		res[i] = min + i;
	return (res);
}
