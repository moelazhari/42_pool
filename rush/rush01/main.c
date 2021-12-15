/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:56:52 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:58:08 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exercise.h"

void	initialize_board(void)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	p = 1;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			g_board[i][j].num = 0;
			while (p <= NUM)
			{
				g_board[i][j].poss[p - 1] = p;
				p++;
			}
			p = 1;
			j++;
		}
		i++;
	}
}

void	get_input(char **av)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	d;

	i = 0;
	j = 0;
	k = 8;
	l = 16;
	d = 24;
	while (i < 4)
	{
		g_colup[i] = av[1][j] - '0';
		g_coldown[i] = av[1][k] - '0';
		g_rowleft[i] = av[1][l] - '0';
		g_rowright[i] = av[1][d] - '0';
		i++;
		j += 2;
		k += 2;
		l += 2;
		d += 2;
	}
}

void	processing(void)
{
	int	ret;

	initialize_values();
	copy_to_g_very_first_backup();
	g_backup_filled = 0;
	while (!is_solved())
	{
		ret = fill_if_one_poss_exist();
		if (is_solved())
			break ;
		if (ret == 0)
		{
			if (g_backup_filled)
			{
				copy_to_g_board();
				g_backup_filled = 0;
			}
			pick_one_poss();
			if (is_solved())
				break ;
		}
	}
	show_g_board();
}

int	main(int ac, char *av[])
{
	if (error(ac, av) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	get_input(av);
	initialize_board();
	processing();
	return (0);
}
