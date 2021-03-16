/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:16:55 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/07 14:13:54 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct	s_usedpos {
	int dl[19];
	int	dr[19];
	int rc[11];
}				t_usedpos;

void			ft_putboard(char *board, int *num_solves)
{
	write(1, board, 10);
	write(1, "\n", 1);
	*num_solves += 1;
}

void			ft_clear_board(char *board, t_usedpos *pos)
{
	int i;

	i = -1;
	while (++i <= 18)
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

short			ft_can_place(int row, int col, t_usedpos *pos)
{
	if (pos->dl[row - col + 9] != 1
		&& pos->dr[row + col] != 1
		&& pos->rc[row] != 1)
		return (1);
	return (0);
}

int				ft_solver(char *board, int col,
		t_usedpos *pos, int *num_solves)
{
	int row;

	if (col >= 10)
	{
		ft_putboard(board, num_solves);
		return (0);
	}
	row = -1;
	while (++row < 10)
	{
		if (ft_can_place(row, col, pos))
		{
			board[col] = row + '0';
			pos->dl[row - col + 9] =
				pos->dr[row + col] =
				pos->rc[row] = 1;
			if (ft_solver(board, (col + 1), pos, num_solves))
				return (1);
			board[col] = 0;
			pos->dl[row - col + 9] =
				pos->dr[row + col] =
				pos->rc[row] = 0;
		}
	}
	return (0);
}

int				ft_ten_queens_puzzle(void)
{
	char		board[11];
	t_usedpos	pos;
	int			num_solves;

	num_solves = 0;
	ft_clear_board(board, &pos);
	ft_solver(board, 0, &pos, &num_solves);
	return (num_solves);
}
