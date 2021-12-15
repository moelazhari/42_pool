/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved_last2.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:46:05 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:27:36 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVED_LAST2_H
# define IS_SOLVED_LAST2_H

int	colup_case_2(int *j)
{
	int	i;
	int	z;
	int	c;

	z = 0;
	c = 2;
	i = 0;
	while (i < NUM - 1)
	{
		if (g_board[z][*j].num < g_board[i + 1][*j].num)
		{
			z++;
			if (g_board[i + 1][*j].num == 4)
				break ;
			c++;
		}
		i++;
	}
	if (c != 2)
		return (0);
	return (1);
}

int	colup_case_3(int *j)
{
	int	c;
	int	z;
	int	i;

	c = 2;
	i = 0;
	z = 0;
	while (i < NUM - 1)
	{
		if (g_board[i][*j].num < g_board[i + 1][*j].num)
		{
			z++;
			if (g_board[i + 1][*j].num == 4)
				break ;
			c++;
		}
		i++;
	}
	if (c != 3)
		return (0);
	return (1);
}

int	coldown_case_2(int *j)
{
	int	i;
	int	z;
	int	c;

	c = 2;
	i = 3;
	z = 3;
	while (i > 0)
	{
		if (g_board[z][*j].num < g_board[i - 1][*j].num)
		{
			z--;
			if (g_board[i - 1][*j].num == 4)
				break ;
			c++;
		}
		i--;
	}
	if (c != 2)
		return (0);
	return (1);
}

int	coldown_case_3(int *j)
{
	int	c;
	int	i;
	int	z;

	c = 2;
	i = 3;
	z = 3;
	while (i > 0)
	{
		if (g_board[z][*j].num < g_board[i - 1][*j].num)
		{
			z--;
			if (g_board[i - 1][*j].num == 4)
				break ;
			c++;
		}
		i--;
	}
	if (c != 3)
		return (0);
	return (1);
}
#endif
