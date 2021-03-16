/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:51:11 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/11 22:57:03 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILE_H
# define HEADERFILE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_board
{
	char	**fboard;
	int		**solver_board;
	int		nr_rows;
	int		nr_cols;
	char	empty;
	char	obstacle;
	char	full;
}				t_board;

typedef struct	s_temp
{
	int		fd;
	int		nr_rows;
	int		nr_cols;
	int		row;
	int		col;
	int		nr_piece;
}				t_temp;

short			ft_ispiece(char c, t_board **board);

short			ft_convert_to_num(char c);
int				ft_strlen(char *str);

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_error(int type);

void			ft_verify_map(char *map);
void			ft_find_square(char *map);
void			ft_create_board(t_board *board, char *map);

#endif
