/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:44:15 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/05 21:28:40 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short	ft_is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

short	ft_is_lower(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

short	ft_not_letter_or_num(char a)
{
	if ((a < 'a' || a > 'z')
		&& (a < 'A' || a > 'Z')
		&& (a < '0' || a > '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_is_lower(str[i]))
			str[i] -= 32;
		else if (ft_not_letter_or_num(str[i]) && ft_is_lower(str[i + 1]))
			str[i + 1] -= 32;
		else if (!ft_not_letter_or_num(str[i]) && ft_is_upper(str[i + 1]))
			str[i + 1] += 32;
		if ((i == 0 && ft_is_upper(str[i])) && ft_is_upper(str[i + 1]))
			str[i + 1] += 32;
		i++;
	}
	return (str);
}
