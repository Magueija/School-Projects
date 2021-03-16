/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:36:15 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/02 21:56:29 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		++a;
	}
	while (a < n)
	{
		dest[a] = '\0';
		++a;
	}
	return (dest);
}
