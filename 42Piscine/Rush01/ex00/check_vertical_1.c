/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vertical_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:44:56 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 18:56:47 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char		**g_tbl;
extern char		**g_pos;

short	ft_check_vertical_5(char val, int r, int c)
{
	if (g_pos[2][c] == '2' && g_pos[3][c] == '3')
	{
		if (val == '1' && (r == 0 && r == 3))
			return (1);
		else if (val == '2' &&
				(r == 0 || r == 2 || r == 3))
			return (1);
		else if (val == '3' && (r == 0 || r == 2))
			return (1);
		else if (val == '4' && r == 1)
			return (1);
	}
	else if (g_pos[2][c] == '3' && g_pos[3][c] == '2')
	{
		if (val == '1' && (r == 0 && r == 3))
			return (1);
		else if (val == '2' &&
				(r == 0 || r == 1 || r == 3))
			return (1);
		else if (val == '3' && (r == 1 || r == 3))
			return (1);
		else if (val == '4' && r == 2)
			return (1);
	}
	return (0);
}

short	ft_check_vertical_4(char val, int r, int c)
{
	if (g_pos[2][c] == '2' && g_pos[3][c] == '2')
	{
		if ((r == 0 || r == 3) && (val == '1'
					|| val == '2' || val == '3'))
			return (1);
		else if ((r == 1 || r == 2) && (val == '4'
					|| val == '1' || val == '2'))
			return (1);
	}
	else
		return (ft_check_vertical_5(val, r, c));
	return (0);
}

short	ft_check_vertical_3(char val, int r, int c)
{
	if (g_pos[2][c] == '1' && g_pos[3][c] == '4')
	{
		if (val == '4' && r == 0)
			return (1);
		else if (val == '3' && r == 1)
			return (1);
		else if (val == '2' && r == 2)
			return (1);
		else if (val == '1' && r == 3)
			return (1);
	}
	else if (g_pos[2][c] == '4' && g_pos[3][c] == '1')
	{
		if (val == '1' && r == 0)
			return (1);
		else if (val == '2' && r == 1)
			return (1);
		else if (val == '3' && r == 2)
			return (1);
		else if (val == '4' && r == 3)
			return (1);
	}
	else
		return (ft_check_vertical_4(val, r, c));
	return (0);
}

short	ft_check_vertical_2(char val, int r, int c)
{
	if (g_pos[2][c] == '1' && g_pos[3][c] == '3')
	{
		if (val == '4' && r == 0)
			return (1);
		else if ((val == '1' || val == '2' || r == '3')
				&& (r == 1 || r == 2 || r == 3))
			return (1);
	}
	else if (g_pos[2][c] == '3' && g_pos[3][c] == '1')
	{
		if ((val == '1' || val == '2' || r == '3')
				&& (r == 0 || r == 1 || r == 2))
			return (1);
		else if (val == '1' && r == 3)
			return (1);
	}
	else
		return (ft_check_vertical_3(val, r, c));
	return (0);
}

short	ft_check_vertical(char val, int r, int c)
{
	if (g_pos[2][c] == '1' && g_pos[3][c] == '2')
	{
		if (val == '4' && r == 0)
			return (1);
		else if ((val == '1' || val == '2') && (r == 1 || r == 2))
			return (1);
		else if (val == '3' && r == 3)
			return (1);
	}
	else if (g_pos[2][c] == '2' && g_pos[3][c] == '1')
	{
		if (val == '3' && r == 0)
			return (1);
		else if ((val == '1' || val == '2') && (r == 1 || r == 2))
			return (1);
		else if (val == '4' && r == 3)
			return (1);
	}
	else
		return (ft_check_vertical_2(val, r, c));
	return (0);
}
