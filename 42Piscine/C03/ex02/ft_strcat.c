/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:22:05 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/03 11:15:22 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		destsize;

	destsize = 0;
	i = -1;
	while (dest[++i] != '\0')
		destsize++;
	i = -1;
	while (src[++i] != '\0')
	{
		dest[destsize] = src[i];
		destsize++;
	}
	dest[destsize] = '\0';
	return (dest);
}
