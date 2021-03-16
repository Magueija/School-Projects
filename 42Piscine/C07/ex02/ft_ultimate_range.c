/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:30:46 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 14:23:03 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int bound;
	int i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	bound = max - min + 1;
	if (!(*range = malloc(sizeof(int) * bound)))
		return (-1);
	i = -1;
	while (++i < bound)
		(*range)[i] = min + i;
	return (bound - 1);
}
