/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:57:56 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 18:50:31 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char		**g_tbl;
extern char		**g_pos;

short	ft_check_horizontal(char val, int r, int c);
short	ft_check_vertical(char val, int r, int c);

short	ft_is_space(char c, char val)
{
	if (c == ' ' || c == val)
		return (1);
	return (0);
}

short	ft_check_row(int r)
{
	if (g_tbl[r][0] != g_tbl[r][1] && g_tbl[r][0] != g_tbl[r][2]
			&& g_tbl[r][0] != g_tbl[r][3] && g_tbl[r][1] != g_tbl[r][2]
			&& g_tbl[r][1] != g_tbl[r][3] && g_tbl[r][2] != g_tbl[r][3])
		return (1);
	return (0);
}

short	ft_check_column(int c)
{
	if (g_tbl[0][c] != g_tbl[1][c] && g_tbl[0][c] != g_tbl[2][c]
			&& g_tbl[0][c] != g_tbl[3][c] && g_tbl[1][c] != g_tbl[2][c]
			&& g_tbl[1][c] != g_tbl[3][c] && g_tbl[2][c] != g_tbl[3][c])
		return (1);
	return (0);
}

short	ft_check_position(char val, int r, int c)
{
	if (ft_check_horizontal(val, r, c) && ft_check_vertical(val, r, c))
		if (ft_check_row(r) && ft_check_column(c))
			return (1);
	return (0);
}
