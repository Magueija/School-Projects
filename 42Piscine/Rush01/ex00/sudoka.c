/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoka.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:38:32 by tosilva           #+#    #+#             */
/*   Updated: 2020/11/01 21:33:19 by tosilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char		**g_tbl;
char		**g_pos;

void	ft_error(int error_type);
void	ft_putchar(char c);
void	ft_vef_default(int r, int c);
short	ft_is_space(char c, char val);
short	ft_check_position(char val, int r, int c);


void	ft_fill_arrays(char *positions)
{
	int i;
	int r;
	int c;

	i = 0;
	r = 0;
	c = 0;
	while (positions[i] != '\0')
	{
		if (i % 2 == 0)
		{
			g_pos[r][c] = positions[i];
			g_tbl[r][c] = ' ';
			c++;
			if (c == 4)
			{
				r++;
				c = 0;
			}
		}
		i++;
	}
}

void	ft_create_arrays(char *positions)
{
	int i;
	int r;
	int c;

	g_tbl = malloc(5 * sizeof(char *));
	g_pos = malloc(5 * sizeof(char *));
	i = 0;
	r = 0;
	c = 0;
	while (positions[i] != '\0')
	{
		if (i % 2 == 0)
		{
			g_tbl[r] = malloc(5 * sizeof(char *));
			g_pos[r] = malloc(5 * sizeof(char *));
			c++;
			if (c == 4)
			{
				r++;
				c = 0;
			}
		}
		i++;
	}
	ft_fill_arrays(positions);
}

short	ft_check_solution()
{
	int		r;
	int		c;
	char	val;

	r = -1;
	while (r < 4)
	{
		c = -1;
		while (c < 4)
		{
			if (!ft_check_position(g_tbl[r][c], r, c))
				return (0);
			c++;
		}
		r++;
	}
	return (1);
}

short	ft_fill_grid(char value)
{
	int		r;
	int		c;
	int		used;
	char	val;

	val = value;
	r = -1;
	while (++r < 4)
	{
		c = -1;
		while (++c < 4)
		{
			if (ft_is_space(g_tbl[r][c], val))
			{
				used = -1;
				while (ft_check_position(val, r, c) == 0)
				{
					if (++used > 4)
						return (0);
					val++;
					if (val > '4')
						val -= 4; 
				}
				if (ft_check_position(val, r, c))
					g_tbl[r][c] = val;
			}
		}
	}
	if (!ft_check_solution())
		return (0);
	return (1);
}

void	ft_write_table()
{
	int		r;
	int		c;
	char	num;

	r = 0;
	while (g_tbl[r] != '\0')
	{
		c = 0;
		while (g_tbl[r][c] != '\0')
		{
			num = g_tbl[r][c];
			write(1, &num, 1);
			write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

void	ft_write_default(char *positions)
{
	int		r;
	int		c;
	char	e;
	

	free(g_tbl);
	free(g_pos);
	g_tbl = NULL;
	g_pos = NULL;
	ft_create_arrays(positions);
	r = 0;
	while (g_pos[r] != '\0')
	{
		c = 0;
		while (g_pos[r][c] != '\0')
		{
			ft_vef_default(r, c);
			c++;
		}
		r++;
	}
}

void	ft_find_solution(char *positions)
{
	char	value;

	ft_write_default(positions);
	value = '1';
	while (ft_fill_grid(value) == 0)
	{
		ft_write_default(positions);

		value++;
		if (value == '5')
			ft_error(1);
	}
	ft_write_table();
}

short	ft_sudoka(char *positions)
{
	//ft_create_arrays(positions);
	ft_find_solution(positions);
	return (0);
}
