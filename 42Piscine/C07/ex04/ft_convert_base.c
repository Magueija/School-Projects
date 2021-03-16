/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 18:15:36 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 19:21:14 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_valid_base(char *arr, int *size)
{
	char	*arr_copy;
	int		i;

	arr_copy = arr;
	*size = 0;
	while (arr[*size])
	{
		if (arr[*size] == '+' || arr[*size] == '-')
			return (0);
		i = -1;
		while (arr_copy[++i])
			if (i != *size)
				if (arr_copy[i] == arr[*size])
					return (0);
		*size += 1;
	}
	if (*size > 1)
		return (1);
	return (0);
}

int		ft_convert_bfrom(int nb, char *base, int *base_size, int memo)
{
	int signal;

	signal = 0;
	if (nb < 0)
	{
		signal = -1;
		nb *= 1;
	}
	else if (nb != 0)
	{
		if ((nb / *base_size))
			ft_convert_bfrom((nb / *base_size), base, bs_size);
		nb += base[(num % *base_size)];
	}
		

	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		bs_from_size;
	int		bs_to_size;
	char	*res;

	if (!ft_vallid_base(base_from, &bs_from_size)
		|| !ft_vallid_base(base_to, &bs_to_size))
		return (NULL);
	res = ft_convert_bfrom(ft_atoi(nbr), base_from, &bs_from_size);
	return (ft_convert_bto(res, base_to, &bs_to_size));
}
