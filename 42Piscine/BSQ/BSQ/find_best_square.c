/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:46:47 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/11 22:59:42 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int		**ft_allocate(t_board **board, t_temp **temp)
{
	int **memo;
	int i;

	if (!(*temp = malloc(sizeof(t_board))))
		ft_error(0);
	if (!(memo = malloc(sizeof(int *) * (*board)->nr_rows + 1)))
		ft_error(0);
	if (!((*board)->solver_board =
				malloc(sizeof(char *) * (*board)->nr_rows + 1)))
		ft_error(0);
	i = -1;
	while (++i < (*board)->nr_rows + 1)
	{
		if (!(memo[i] = malloc(sizeof(int) * (*board)->nr_rows + 1)))
			ft_error(0);
		if (!((*board)->solver_board[i] =
					malloc(sizeof(char) * (*board)->nr_cols + 1)))
			ft_error(0);
	}
	return (memo);
}

int		ft_fill_solver_board(t_board *board, int row, int col, int **memo)
{
	int val;

	val = 0;
	if (memo[row][col] > -1)
		return (memo[row][col]);
	else if (memo[row][col] == -2)
		val = 1;
	if (row == 0 && col == 0)
		val += 0;
	else if (col == 0)
		val += board->solver_board[row - 1][col];
	else if (row == 0)
		val += board->solver_board[row][col - 1];
	else
		val += (ft_fill_solver_board(board, row, col - 1, memo)
			+ ft_fill_solver_board(board, row - 1, col, memo)
			- ft_fill_solver_board(board, row - 1, col - 1, memo));
	memo[row][col] = val;
	return (val);
}

void	ft_fill_memo(int **memo, t_temp **temp, char obstacle, char bf)
{
	if (bf == obstacle)
		memo[(*temp)->row - 1][(*temp)->col] = -2;
	else
		memo[(*temp)->row - 1][(*temp)->col] = -1;
}

void	ft_create_board(t_board *board, char *map)
{
	t_temp	*temp;
	int		**memo;
	char	bf[1];
	int		i;
	int		j;

	memo = ft_allocate(&board, &temp);
	if (!(temp->fd = open(map, O_RDONLY)))
		ft_error(1);
	temp->row = 0;
	temp->col = 0;
	while ((read(temp->fd, bf, 1)) > 0)
	{
		if (bf[0] == '\n')
		{
			temp->col = -1;
			temp->row++;
		}
		else if (temp->row != 0)
			ft_fill_memo(memo, &temp, board->obstacle, bf[0]);
		temp->col++;
	}
	close(temp->fd);
	free(temp);
	temp = NULL;
	i = -1;
	while (++i < board->nr_rows)
	{
		j = -1;
		while (++j < board->nr_rows)
		{
			board->solver_board[i][j] = ft_fill_solver_board(board, i, j, memo);
		}
	}
	i = -1;
	while (++i < board->nr_rows)
	{
		j = -1;
		while (++j < board->nr_rows)
		{
			ft_putchar(memo[i][j] + '0');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
	ft_putchar('\n');
	i = -1;
	while (++i < board->nr_rows)
	{
		j = -1;
		while (++j < board->nr_rows)
		{
			ft_putchar(board->solver_board[i][j] + '0');
		}
		ft_putchar('\n');
	}
}
