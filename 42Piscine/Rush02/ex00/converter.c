/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:51:27 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/08 23:21:22 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_printnum(char *nb, t_dictionary *dict_ctt, int first)
{
	int idex;

	idex = ft_strcmp(nb, dict_ctt->nums, dict_ctt->max_ln_len_num, 0);
	if (idex != -1)
	{
		if (first)
			ft_putchar(' ');
		ft_putstr(dict_ctt->str_nums[idex]);
	}
	else
	{
		ft_error(1);
		return ;
	}
}

void	ft_converter(char *nb, t_dictionary *dict_ctt)
{
	int		i;
	int		j;
	int		nb_len;
	char	*zero_nb;

	if (!(zero_nb = malloc((dict_ctt->max_ln_len_str + 1) * sizeof(char))))
		ft_error(0);
	i = 0;
	nb_len = ft_strlen_nb(nb);
	while (nb[i] != '\0')
	{
		if (ft_issignal(nb[i]) && i == 0 && nb[i + 1] != '0')
		{
			if (nb[i] == '-')
				ft_putstr("minus");
			i++;
			nb_len--;
			continue ;
		}
		else if (nb[i] == '-')
		{
			ft_error(0);
			return ;
		}
		if (i == 0 && nb[i] == '0' && nb[i + 1] == '\0')
			ft_printnum(nb, dict_ctt, i);
		else if (nb[i] != '0')
		{
			if (nb_len > 2)
			{
				zero_nb[0] = nb[i];
				zero_nb[1] = '\0';
				ft_printnum(zero_nb, dict_ctt, i);
				zero_nb[0] = '1';
				j = 0;
				while (++j < nb_len)
					zero_nb[j] = '0';
				zero_nb[j] = '\0';
				ft_printnum(zero_nb, dict_ctt, i + 1);
			}
			else if (nb_len == 2 && nb[i] > '1')
			{
				zero_nb[0] = nb[i];
				zero_nb[1] = '0';
				zero_nb[2] = '\0';
				ft_printnum(zero_nb, dict_ctt, i);
			}
			else
			{
				if (nb[i] > '1')
				{
					j = -1;
					while (++j < i + 1)
						nb[j] = nb[i + j];
					nb[j] = '\0';
				}
				ft_printnum(nb, dict_ctt, i);
				return ;
			}
			zero_nb[0] = '\0';
		}
		nb_len--;
		i++;
	}
}
