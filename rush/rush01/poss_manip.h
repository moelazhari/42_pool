/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poss_manip.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:51:33 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 15:07:24 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSS_MANIP_H
# define POSS_MANIP_H

void	remove_possibility(int i, int j, int n)
{
	g_board[i][j].poss[n - 1] = 0;
}

void	decrease_possibilities(int i, int j, int n)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (l < NUM)
	{
		remove_possibility(i, l, n);
		l++;
	}
	while (k < NUM)
	{
		remove_possibility(k, j, n);
		k++;
	}
}

void	add_number(int i, int j, int n)
{
	g_board[i][j].num = n;
	decrease_possibilities(i, j, n);
}

int	check_if_one_possibility(int i, int j)
{
	int	k;
	int	counter;
	int	index;

	k = 0;
	counter = 0;
	while (k < NUM)
	{
		if (g_board[i][j].poss[k] != 0)
		{
			counter++;
			index = k;
		}
		k++;
	}
	if (counter == 1)
		return (g_board[i][j].poss[index]);
	else
		return (0);
}

int	g_fill_i;
int	g_fill_j;

int	fill_if_one_poss_exist(void)
{
	int	n;
	int	counter;

	counter = 0;
	g_fill_i = 0;
	g_fill_j = 0;
	while (g_fill_i < NUM)
	{
		g_fill_j = 0;
		while (g_fill_j < NUM)
		{
			if (g_board[g_fill_i][g_fill_j].num == 0)
			{
				n = check_if_one_possibility(g_fill_i, g_fill_j);
				if (n != 0)
				{
					add_number(g_fill_i, g_fill_j, n);
					counter++;
				}
			}
			g_fill_j++;
		}
		g_fill_i++;
	}
	return (counter);
}
#endif
