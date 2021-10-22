/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:54:27 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 17:40:49 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVED_H
# define IS_SOLVED_H
# include "is_solved_last.h"

int	check_if_duplicate(int *p)
{
	int	i;

	i = 0;
	while (i < NUM)
	{
		if (p[i] != 1)
			return (0);
		p[i] = 0;
		i++;
	}
	return (1);
}

int	check_if_dup_row_by_row(void)
{
	int	i;
	int	j;
	int	n;
	int	c;
	int	dup[NUM];

	c = 0;
	i = 0;
	j = 0;
	while (c++ < NUM)
		dup[c] = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			n = g_board[i][j].num;
			dup[n - 1] += 1;
			j++;
		}
		if (check_if_duplicate(dup) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_if_dup_col_by_col(void)
{
	int	i;
	int	j;
	int	n;
	int	c;
	int	dup[NUM];

	c = 0;
	while (c++ < NUM)
		dup[c] = 0;
	i = 0;
	j = 0;
	while (j < NUM)
	{
		i = 0;
		while (i < NUM)
		{
			n = g_board[i][j].num;
			dup[n - 1] += 1;
			i++;
		}
		if (check_if_duplicate(dup) == 0)
			return (0);
		j++;
	}
	return (1);
}

int	is_solved(void)
{
	if (check_if_dup_row_by_row() == 1)
		return (0);
	if (check_if_dup_col_by_col() == 1)
		return (0);
	if (is_solved_last())
		return (1);
	else
		return (0);
}
#endif
