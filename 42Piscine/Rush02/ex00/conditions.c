/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:13:47 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/08 21:39:40 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

short	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

short	ft_issignal(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

short	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
