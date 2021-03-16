/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_vals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:14:24 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 15:51:09 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(int error_type);
short	ft_is_space(char c, char val);

extern char		**g_tbl;
extern char		**g_pos;

void	ft_default_updown_2(int l, int c)
{
	if (g_pos[l][c] == '1')
	{
		if (ft_is_space(g_tbl[(l == 0 ? 0 : 3)][c], '4'))
		{
			g_tbl[(l == 0 ? 0 : 3)][c] = '4';
			if (g_pos[(l == 0 ? l + 1 : l - 1)][c] == '2')
			{
				if (ft_is_space(g_tbl[(l == 0 ? 3 : 0)][c], '3'))
					g_tbl[(l == 0 ? 3 : 0)][c] = '3';
				else
					ft_error(1);
			}
		}
		else
			ft_error(1);
	}
	else if (g_pos[l][c] == '3' && g_pos[(l == 0 ? l + 1 : l - 1)][c] == '2')
	{
		if (ft_is_space(g_tbl[(l == 0 ? 2 : 1)][c], '4'))
			g_tbl[(l == 0 ? 2 : 1)][c] = '4';
		else
			ft_error(1);
	}
	else if (g_pos[l][c] == '4' && g_pos[(l == 0 ? l + 1 : l - 1)][c] != '1')
		ft_error(1);
}

void	ft_default_updown(int l, int c)
{
	if (g_pos[l][c] == '4' && g_pos[(l == 0 ? l + 1 : l - 1)][c] == '1')
	{
		if (ft_is_space(g_tbl[0][c], (l == 0) ? '1' : '4')
			&& ft_is_space(g_tbl[1][c], (l == 0) ? '2' : '3')
			&& ft_is_space(g_tbl[2][c], (l == 0) ? '3' : '2')
			&& ft_is_space(g_tbl[3][c], (l == 0) ? '4' : '1'))
		{
			g_tbl[0][c] = (l == 0) ? '1' : '4';
			g_tbl[1][c] = (l == 0) ? '2' : '3';
			g_tbl[2][c] = (l == 0) ? '3' : '2';
			g_tbl[3][c] = (l == 0) ? '4' : '1';
		}
		else
			ft_error(1);
	}
	else
		ft_default_updown_2(l, c);
}

void	ft_default_leftright_2(int l, int c)
{
	if (g_pos[l][c] == '1')
	{
		if (ft_is_space(g_tbl[c][(l == 2 ? 0 : 3)], '4'))
		{
			g_tbl[c][(l == 2 ? 0 : 3)] = '4';
			if (g_pos[(l == 2 ? l + 1 : l - 1)][c] == '2')
			{
				if (ft_is_space(g_tbl[c][(l == 2 ? 3 : 0)], '3'))
					g_tbl[c][(l == 2 ? 3 : 0)] = '3';
				else
					ft_error(1);
			}
		}
		else
			ft_error(1);
	}
	else if (g_pos[l][c] == '3' && g_pos[(l == 2 ? l + 1 : l - 1)][c] == '2')
	{
		if (ft_is_space(g_tbl[c][(l == 2 ? 2 : 1)], '4'))
			g_tbl[c][(l == 2 ? 2 : 1)] = '4';
		else
			ft_error(1);
	}
	else if (g_pos[l][c] == '4' && g_pos[(l == 2 ? l + 1 : l - 1)][c] != '1')
		ft_error(1);
}

void	ft_default_leftright(int l, int c)
{
	if (g_pos[l][c] == '4' && g_pos[(l == 2 ? l + 1 : l - 1)][c] == '1')
	{
		if (ft_is_space(g_tbl[c][0], (l == 2) ? '1' : '4')
			&& ft_is_space(g_tbl[c][1], (l == 2) ? '2' : '3')
			&& ft_is_space(g_tbl[c][2], (l == 2) ? '3' : '2')
			&& ft_is_space(g_tbl[c][3], (l == 2) ? '4' : '1'))
		{
			g_tbl[c][0] = (l == 2) ? '1' : '4';
			g_tbl[c][1] = (l == 2) ? '2' : '3';
			g_tbl[c][2] = (l == 2) ? '3' : '2';
			g_tbl[c][3] = (l == 2) ? '4' : '1';
		}
		else
			ft_error(1);
	}
	else
		ft_default_leftright_2(l, c);
}

void	ft_vef_default(int l, int c)
{
	if (l == 0 || l == 1)
		ft_default_updown(l, c);
	else
		ft_default_leftright(l, c);
}
