/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:55:51 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/03 20:09:26 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sc_sz;
	unsigned int	dt_sz;
	unsigned int	i;

	sc_sz = 0;
	while (src[sc_sz] != '\0')
		sc_sz++;
	dt_sz = 0;
	while (dest[dt_sz] != '\0' && dt_sz < size)
		dt_sz++;
	i = 0;
	while ((dt_sz + i + 1) < size && src[i] != '\0')
	{
		dest[dt_sz + i] = src[i];
		i++;
	}
	if (dt_sz + i < size)
		dest[dt_sz + i] = '\0';
	return (sc_sz + dt_sz);
}
