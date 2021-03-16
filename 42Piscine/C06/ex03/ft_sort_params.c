/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:43:39 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/10 19:05:50 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		len;

	len = ft_strlen(str);
	write(1, str, len);
	write(1, "\n", 1);
}

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0'
			&& str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_ascii(char **str, int nr_param)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < nr_param)
	{
		j = 0;
		while (++j < nr_param)
		{
			if (ft_strcmp(str[i], str[j]) < 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	i = 0;
	while (++i < nr_param)
		ft_putstr(str[i]);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_ascii(argv, argc);
	return (0);
}
