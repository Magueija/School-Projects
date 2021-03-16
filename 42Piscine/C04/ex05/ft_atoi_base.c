/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:53:28 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/09 13:51:33 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

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

int		ft_convert_num(char letter, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == letter)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_size;
	int result;
	int	signal;
	int	num;

	if (ft_valid_base(base, &base_size))
	{
		i = 0;
		signal = 1;
		while (ft_isspace(str[i]))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signal *= -1;
			i++;
		}
		result = 0;
		while ((num = ft_convert_num(str[i++], base)) != -1)
			result = (result * base_size) + num;
		return (result * signal);
	}
	return (0);
}
