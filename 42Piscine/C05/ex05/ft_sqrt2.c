/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:26:40 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/07 11:25:11 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive(int *nb, int *i)
{
	if (*i * *i == *nb)
		return (*i);
	else if (*i > (*nb / 2))
		return (0);
	*i += 1;
	return (ft_recursive(nb, i));
}

int		ft_sqrt2(int nb)
{
	int i;

	i = 0;
	return (ft_recursive(&nb, &i));
}
