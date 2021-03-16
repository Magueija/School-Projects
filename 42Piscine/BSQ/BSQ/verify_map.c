/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:28:54 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/11 20:26:46 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_allocate_structs(t_board **board, t_temp **temp)
{
	if (!(*board = malloc(sizeof(t_board)))
		|| !(*temp = malloc(sizeof(t_temp))))
		ft_error(0);
	(*board)->nr_rows = 0;
	(*temp)->row = 0;
	(*temp)->col = 0;
	(*temp)->nr_piece = 0;
}

short	ft_convert_to_num(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

void	ft_first_row(t_board **board, t_temp **temp, char bf)
{
	if (((*temp)->nr_rows = ft_convert_to_num(bf)) != -1)
		(*board)->nr_rows = ((*board)->nr_rows * 10) + (*temp)->nr_rows;
	else if ((*temp)->nr_piece < 3)
	{
		if ((*temp)->nr_piece == 0)
			(*board)->empty = bf;
		else if ((*temp)->nr_piece == 1)
			(*board)->obstacle = bf;
		else
			(*board)->full = bf;
		(*temp)->nr_piece++;
	}
	else if (bf != '\n')
		ft_error(1);
}

void	ft_new_line(t_temp **temp)
{
	if ((*temp)->col > (*temp)->nr_cols)
		(*temp)->nr_cols = (*temp)->col;
	(*temp)->col = -1;
	(*temp)->row++;
}

void	ft_verify_map(char *map)
{
	t_board *board;
	t_temp	*temp;
	char	bf[2];

	ft_allocate_structs(&board, &temp);
	if (((temp->fd) = open(map, O_RDONLY)) == -1)
		ft_error(1);
	while (read((temp->fd), bf, 1) > 0)
	{
		bf[1] = '\0';
		if (temp->row == 0)
			ft_first_row(&board, &temp, bf[0]);
		if (bf[0] == '\n')
			ft_new_line(&temp);
		else if (!ft_ispiece(bf[0], &board) && temp->row != 0
				&& bf[0] != board->full)
			ft_error(1);
		temp->col++;
	}
	close(temp->fd);
	if (board->nr_rows != temp->row - 1)
		ft_error(1);
	free(temp);
	temp = NULL;
	ft_create_board(board, map);
}
