/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:12:30 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 18:11:13 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_bid(char **str, int size, int sep_len)
{
	int chr;
	int word;
	int nr_chr;

	nr_chr = 0;
	word = 0;
	while (str[word] != '\0' && word < size)
	{
		chr = 0;
		while (str[word][chr] != '\0')
		{
			nr_chr++;
			chr++;	
		}
		nr_chr += sep_len;
		word++;
	}
	return (nr_chr);
}

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		chr;
	int		word;
	int		i;
	int		is;

	if (!(res = malloc(sizeof(char) * (ft_strlen_bid(strs, size, ft_strlen(sep)) + 1))))
		return (NULL);
	if (size == 0)
		return (res);
	i = -1;
	word = 0;
	while (strs[word] != '\0' && word < size)
	{
		chr = -1;
		while (strs[word][++chr] != '\0')
			res[++i] = strs[word][chr];
		is = -1;
		if (strs[word + 1] == '\0' || word + 1 == size)
		   break ;	
		while (sep[++is] != '\0')
			res[++i] = sep[is];
		word++;
	}
	res[++i] = '\0';
	return (res);
}
