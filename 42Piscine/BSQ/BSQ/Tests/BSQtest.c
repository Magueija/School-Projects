/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 02:09:01 by mvaldeta          #+#    #+#             */
/*   Updated: 2020/11/11 02:27:39 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_allocate(t_board **board)
{
	int i;

	if (!((*board)->fboard = malloc(sizeof(char *) * (*board)->nr_rows)))
		ft_error(0);
	if (!((*board)->solver_board = malloc(sizeof(char *) * (*board)->nr_rows)))
		ft_error(0);
	i = -1;
	while (++i < (*board)->nr_rows)
	{
		if (!((*board)->fboard[i] = malloc(sizeof(char) * (*board)->nr_cols)))
			ft_error(0);
		if (!((*board)->solver_board[i] = malloc(sizeof(char) * (*board)->nr_cols)))
			ft_error(0);
	}
}

void	ft_fill_boards(t_board **board)
{
	int r;
	int c;

	r = -1;
	while (++r < (*board)->nr_rows)
	{
		c = -1;
		while (++c < (*board)->nr_cols)
		{
			(*board)->fboard[r][c] = '0';
			(*board)->solver_board[r][c] = 0;
		}
	}
}

void	ft_create_board(t_board *board, char *map)
{
	t_temp	temp;
	char	bf[1];

	ft_allocate(&board);
	ft_fill_boards(&board);
	if (!(temp.fd = open(map, O_RDONLY)))
		ft_error(1);
	temp.row = 0;
	temp.col = 0;
	while ((read(temp.fd, bf, 1)) > 0)
	{
		if (temp.row == 0)
		{
			temp.row++;
			continue ;
		}
		if (bf[0] == '\n')
			temp.row++;
		else if (ft_ispiece(bf[0], board))
			board->fboard[temp.row][temp.col] = bf[0];
		else
			ft_error(1);
		temp.col++;
	}
	close(temp.fd);
}

int 	bsq(char** matrix, int matrixRowSize, int matrixColSize) 
{
  int rs = matrixRowSize;
  int cs = matrixColSize;
  int max = 0;
  while (int j = 0 && j < cs) 
  {
    ++j;
	matrix[0][j] -= '0';
    if (matrix[0][j] == 1) 
	{
      max = 1;
    }
  }
  while(int i = 1 && i < rs) 
  {
    ++i;
	while (int j = 0 && j < cs)
	{
		++j;
      matrix[i][j] -= '0';
      if (matrix[i][j] != 0) 
	  {
        matrix[i][j] += matrix[i - 1][j];
      }
  }
    /* inspect this line */
    int count = 0;
    while (int k = 0 && k < cs)
	{
		++k;
      if (matrix[i][k] > max) 
	  {
        ++count;
        if (count > max) 
		{
          ++max;
          break;
        }
      } else 
	  {
        count = 0;
      }
    }
  }
  return max * max;
}

int		main(void)
{
	int fd;

	fd = open("map1.txt",O_RONLY);
	bsq(char** matrix, int matrixRowSize, int matrixColSize)
	ft_create_board(t_board *board, char *map)



}
