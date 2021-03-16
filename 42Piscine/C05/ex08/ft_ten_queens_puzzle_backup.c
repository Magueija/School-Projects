/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:16:55 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/07 13:54:50 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct	s_usedpos2 {
	int dl[19];
	int	dr[19];
	int rc[11];
}				t_usedpos;

void			ft_putboard2(char *board, int *num_solves)
{
	write(1, board, 10);
	write(1, "\n", 1);
	*num_solves += 1;
}

void			ft_clear_board2(char *board, t_usedpos *pos)
{
	int i;

	i = -1;
	while (++i <= 19)
	{
		if (i <= 10)
		{
			board[i] = 0;
			pos->rc[i] = 0;
		}
		pos->dl[i] = 0;
		pos->dr[i] = 0;
	}
}

short			ft_can_place2(int col, int row, t_usedpos *pos)
{
	if (pos->dl[col - row + 9] != 1
		&& pos->dr[col + row] != 1
		&& pos->rc[col] != 1)
		return (1);
	return (0);
}

int				ft_solver2(char *board, char row,
		t_usedpos *pos, int *num_solves)
{
	int col;

	if (row > '9')
	{
		ft_putboard2(board, num_solves);
		return (0);
	}
	col = -1;
	while (++col < 10)
	{
		if (ft_can_place2(col, (row - '0'), pos))
		{
			board[col] = row;
			pos->dl[col - (row - '0') + 9] =
				pos->dr[col + (row - '0')] =
				pos->rc[col] = 1;
			if (ft_solver2(board, (row + 1), pos, num_solves))
				return (1);
			board[col] = 0;
			pos->dl[col - (row - '0') + 9] =
				pos->dr[col + (row - '0')] =
				pos->rc[col] = 0;
		}
	}
	return (0);
}

int				ft_ten_queens_puzzle2(void)
{
	char		board[11];
	t_usedpos	pos;
	int			num_solves;

	num_solves = 0;
	ft_clear_board2(board, &pos);
	ft_solver2(board, '0', &pos, &num_solves);
	return (num_solves);
}
