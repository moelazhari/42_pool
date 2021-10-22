/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved_last3.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:51:44 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:43:16 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVED_LAST3_H
# define IS_SOLVED_LAST3_H

int	rowleft_case_2(int *i)
{
	int	c;
	int	z;
	int	j;

	c = 2;
	j = 0;
	z = 0;
	while (j < NUM - 1)
	{
		if (g_board[*i][z].num < g_board[*i][j + 1].num)
		{
			z++;
			if (g_board[*i][j + 1].num == 4)
				break ;
			c++;
		}
		j++;
	}
	if (c != 2)
		return (0);
	return (1);
}

int	rowleft_case_3(int *i)
{
	int	j;
	int	z;
	int	c;

	c = 2;
	j = 0;
	z = 0;
	while (j < NUM - 1)
	{
		if (g_board[*i][z].num < g_board[*i][j + 1].num)
		{
			z++;
			if (g_board[*i][j + 1].num == 4)
				break ;
			c++;
		}
		j++;
	}
	if (c != 3)
		return (0);
	return (1);
}

int	rowright_case_2(int *i)
{
	int	j;
	int	c;
	int	z;

	z = 3;
	c = 2;
	j = 3;
	while (j > 0)
	{
		if (g_board[*i][z].num < g_board[*i][j - 1].num)
		{
			z--;
			if (g_board[*i][j - 1].num == 4)
				break ;
			c++;
		}
		j--;
	}
	if (c != 2)
		return (0);
	return (1);
}

int	rowright_case_3(int *i)
{
	int	j;
	int	c;
	int	z;

	c = 2;
	j = 3;
	z = 3;
	while (j > 0)
	{
		if (g_board[*i][z].num < g_board[*i][j - 1].num)
		{
			z--;
			if (g_board[*i][j - 1].num == 4)
			{
				break ;
			}
			c++;
		}
		j--;
	}
	if (c != 3)
		return (0);
	return (1);
}
#endif
