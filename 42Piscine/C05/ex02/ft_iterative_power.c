/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:28:44 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/06 13:34:39 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int num;

	if (power < 0)
		return (0);
	num = 1;
	while (power--)
		num *= nb;
	return (num);
}
