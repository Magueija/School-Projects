/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:33:06 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/12 14:45:10 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_create_array(t_dictionary *dict_ctt)
{
	int i;

	if (!(dict_ctt->nums =
				malloc((dict_ctt->nr_ln + 1) * sizeof(char *)))
		|| !(dict_ctt->str_nums =
			malloc((dict_ctt->nr_ln + 1) * sizeof(char *))))
		ft_error(0);
	i = 0;
	while (i < dict_ctt->nr_ln)
	{
		if (!(dict_ctt->nums[i] =
					malloc((dict_ctt->max_ln_len_num + 1) * sizeof(char *)))
			|| !(dict_ctt->str_nums[i] =
				malloc((dict_ctt->max_ln_len_str + 1) * sizeof(char *))))
			ft_error(0);
		i++;
	}
}

void	ft_read_file(char *dfile, t_dictionary *dict_ctt)
{
	int		fd;
	char	buffer[1];
	int		ln_len;
	int		nr_ln;
	int		nr_spaces;
	int		change_array;

	if ((fd = open(dfile, O_RDONLY)) == -1)
		ft_error(0);
	ln_len = 0;
	nr_ln = 0;
	nr_spaces = 0;
	change_array = 0;
	while (read(fd, buffer, 1) > 0)
	{
		if (ft_isspace(buffer[0]))
		{
			if (nr_spaces || !change_array || ln_len == 0)
			{
				nr_spaces++;
				continue ;
			}
		}
		else
		{
			nr_spaces = 0;
		}
		if (buffer[0] == ':')
		{
			dict_ctt->nums[nr_ln][ln_len + 1] = '\0';
			ln_len = 0;
			change_array = 1;
			continue ;
		}
		if (buffer[0] == '\n')
		{
			dict_ctt->str_nums[nr_ln][ln_len + 1] = '\0';
			change_array = 0;
			ln_len = 0;
			nr_ln++;
			continue ;
		}
		if (change_array == 0)
		{
			dict_ctt->nums[nr_ln][ln_len] = buffer[0];
		}
		else
		{
			dict_ctt->str_nums[nr_ln][ln_len] =
				ft_isspace(buffer[0]) ? ' ' : buffer[0];
		}
		ln_len++;
	}
	close(fd);
}

void			ft_count_lines(char *dfile, t_dictionary *dict_ctt)
{
	int		fd;
	char	buffer[1];
	int		ln_len;
	int		nr_spaces;
	int		change_array;

	if ((fd = open(dfile, O_RDONLY)) == -1)
		ft_error(0);
	dict_ctt->nr_ln = 0;
	dict_ctt->max_ln_len_num = 0;
	dict_ctt->max_ln_len_str = 0;
	ln_len = 0;
	nr_spaces = 0;
	change_array = 0;
	while (read(fd, buffer, 1) > 0)
	{
		if (ft_isspace(buffer[0]))
		{
			if (nr_spaces || !change_array)
			{
				nr_spaces++;
				continue ;
			}
		}
		else
			nr_spaces = 0;
		if (buffer[0] == ':')
		{
			ln_len = 0;
			change_array = 1;
			continue ;
		}
		if (buffer[0] == '\n')
		{
			ln_len = 0;
			change_array = 0;
			dict_ctt->nr_ln += 1;
			continue ;
		}
		if (change_array == 0)
		{
			if (dict_ctt->max_ln_len_num < ln_len)
				dict_ctt->max_ln_len_num = ln_len;
		}
		else if (!change_array)
			if (dict_ctt->max_ln_len_str < ln_len)
				dict_ctt->max_ln_len_str = ln_len;
		ln_len++;
	}
	close(fd);
	ft_create_array(dict_ctt);
	ft_read_file(dfile, dict_ctt);
}

void			ft_translate_num(char *num, char *dfile)
{
	t_dictionary	dict_ctt;
	int i;

	ft_count_lines(dfile, &dict_ctt);
	ft_converter(num, &dict_ctt);


	i = 0;
	while (i < dict_ctt.nr_ln)
	{
		free(dict_ctt.nums[i]);
		free(dict_ctt.str_nums[i]);
		i++;
	}
	free(dict_ctt.nums);
	free(dict_ctt.str_nums);
}
