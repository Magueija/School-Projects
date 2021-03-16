/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:50:16 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/08 18:55:22 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_HEADERFILE_H__
#define __FT_HEADERFILE_H__

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct	s_dictionary
{
	char	**nums;
	char	**str_nums;
	int		nr_ln;
	int		max_ln_len_num;
	int		max_ln_len_str;
}				t_dictionary;

short	ft_error(int error_type);
short	ft_isnum(char c);
short	ft_issignal(char c);
short	ft_isspace(char c);
int		ft_strlen(char *str);
int		ft_strlen_nb(char *str);
int		ft_strcmp(char *num, char **str, int max_len, int nr_ln);
void	ft_putchar(char c);
void	ft_putstr(char str[]);
void	ft_translate_num(char *num, char *dict);
void	ft_converter(char *nb, t_dictionary *dict_ctt);

#endif
