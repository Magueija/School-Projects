/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:06:01 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 11:33:29 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int nrchanges;
	int	nb;

	nrchanges = 0;
	i = -1;
	while (++i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			nb = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = nb;
			nrchanges++;
		}
	}
	if (nrchanges != 0)
		ft_sort_int_tab(tab, size);
}
