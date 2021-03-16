/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:23:41 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 12:15:28 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_is_equal(char *str, char *to_find, int size, int *pos)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			*pos = i;
			while (to_find[j] == str[i] && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (size == j)
				return (1);
			i = *pos;
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int size;
	int pos;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (str);
	else if (ft_is_equal(str, to_find, size, &pos))
		return (str + pos);
	return (0);
}
