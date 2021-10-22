/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poss_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:34:08 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:47:59 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSS_HEADER_H
# define POSS_HEADER_H

int	return_first_possibility(int i, int j)
{
	int	l;

	l = 0;
	while (g_board[i][j].poss[l] == 0)
		l++;
	return (g_board[i][j].poss[l]);
}

void	copy_to_backup(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			g_board_backup[i][j] = g_board[i][j];
			j++;
		}
		i++;
	}
}

void	copy_to_g_very_first_backup(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			g_very_first_backup[i][j] = g_board[i][j];
			j++;
		}
		i++;
	}
}

void	copy_to_g_board(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			g_board[i][j] = g_board_backup[i][j];
			j++;
		}
		i++;
	}
}

int	it_have_remaining_poss(int i, int j)
{
	int	z;

	z = 0;
	while (z < NUM)
	{
		if (g_board[i][j].poss[z] != 0)
		{
			return (1);
		}
		z++;
	}
	return (0);
}
#endif
