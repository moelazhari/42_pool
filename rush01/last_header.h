/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:37:06 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:52:08 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAST_HEADER_H
# define LAST_HEADER_H

void	show_g_board(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			ft_putnbr(g_board[i][j].num);
			if (j != NUM - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	it_have_one_possibility(int i, int j)
{
	int	o;
	int	c;

	o = 0;
	c = 0;
	while (o < NUM)
	{
		if (g_board[i][j].poss[o] != 0)
			c++;
		o++;
	}
	if (c == 1)
		return (1);
	else
		return (0);
}

int	is_filled(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < NUM)
	{
		j = 0;
		while (j < NUM)
		{
			if (g_board[i][j].num == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
#endif
