/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:36:12 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/07 12:16:27 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	else if (nb == 2147483647)
		return (2147483647);
	i = 3;
	while (nb % i != 0 && i < nb)
		i += 2;
	if (i == nb && nb % i == 0)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
