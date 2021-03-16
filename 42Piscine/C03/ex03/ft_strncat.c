/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:19:51 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/03 20:10:35 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	destsize;

	destsize = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		destsize++;
		i++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[destsize] = src[i];
		destsize++;
		i++;
	}
	dest[destsize] = '\0';
	return (dest);
}
