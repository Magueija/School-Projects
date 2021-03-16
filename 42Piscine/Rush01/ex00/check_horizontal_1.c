/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_horizontal_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:44:56 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 18:45:41 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char		**g_tbl;
extern char		**g_pos;

short	ft_check_horizontal_5(char val, int r, int c)
{
	if (g_pos[2][r] == '2' && g_pos[3][r] == '3')
	{
		if (val == '1' && (c == 0 && c == 3))
			return (1);
		else if (val == '2' &&
				(c == 0 || c == 2 || c == 3))
			return (1);
		else if (val == '3' && (c == 0 || c == 2))
			return (1);
		else if (val == '4' && c == 1)
			return (1);
	}
	else if (g_pos[2][r] == '3' && g_pos[3][r] == '2')
	{
		if (val == '1' && (c == 0 && c == 3))
			return (1);
		else if (val == '2' &&
				(c == 0 || c == 1 || c == 3))
			return (1);
		else if (val == '3' && (c == 1 || c == 3))
			return (1);
		else if (val == '4' && c == 2)
			return (1);
	}
	return (0);
}

short	ft_check_horizontal_4(char val, int r, int c)
{
	if (g_pos[2][r] == '2' && g_pos[3][r] == '2')
	{
		if ((c == 0 || c == 3) && (val == '1'
					|| val == '2' || val == '3'))
			return (1);
		else if ((c == 1 || c == 2) && (val == '4'
					|| val == '1' || val == '2'))
			return (1);
	}
	else
		return (ft_check_horizontal_5(val, r, c));
	return (0);
}

short	ft_check_horizontal_3(char val, int r, int c)
{
	if (g_pos[2][r] == '1' && g_pos[3][r] == '4')
	{
		if (val == '4' && c == 0)
			return (1);
		else if (val == '3' && c == 1)
			return (1);
		else if (val == '2' && c == 2)
			return (1);
		else if (val == '1' && c == 3)
			return (1);
	}
	else if (g_pos[2][r] == '4' && g_pos[3][r] == '1')
	{
		if (val == '1' && c == 0)
			return (1);
		else if (val == '2' && c == 1)
			return (1);
		else if (val == '3' && c == 2)
			return (1);
		else if (val == '4' && c == 3)
			return (1);
	}
	else
		return (ft_check_horizontal_4(val, r, c));
	return (0);
}

short	ft_check_horizontal_2(char val, int r, int c)
{
	if (g_pos[2][r] == '1' && g_pos[3][r] == '3')
	{
		if (val == '4' && c == 0)
			return (1);
		else if ((val == '1' || val == '2' || c == '3')
				&& (c == 1 || c == 2 || c == 3))
			return (1);
	}
	else if (g_pos[2][r] == '3' && g_pos[3][r] == '1')
	{
		if ((val == '1' || val == '2' || c == '3')
				&& (c == 0 || c == 1 || c == 2))
			return (1);
		else if (val == '1' && c == 3)
			return (1);
	}
	else
		return (ft_check_horizontal_3(val, r, c));
	return (0);
}

short	ft_check_horizontal(char val, int r, int c)
{
	if (g_pos[2][r] == '1' && g_pos[3][r] == '2')
	{
		if (val == '4' && c == 0)
			return (1);
		else if ((val == '1' || val == '2') && (c == 1 || c == 2))
			return (1);
		else if (val == '3' && c == 3)
			return (1);
	}
	else if (g_pos[2][r] == '2' && g_pos[3][r] == '1')
	{
		if (val == '3' && c == 0)
			return (1);
		else if ((val == '1' || val == '2') && (c == 1 || c == 2))
			return (1);
		else if (val == '4' && c == 3)
			return (1);
	}
	else
		return (ft_check_horizontal_2(val, r, c));
	return (0);
}
