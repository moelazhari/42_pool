/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_one_poss.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:25:20 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:59:13 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PICK_ONE_POSS_H
# define PICK_ONE_POSS_H

int	g_o;

void	pick_one_one_iter(int i, int j)
{
	int	n;

	if (it_have_remaining_poss(i, j) && !g_board[i][j].checked)
	{
		if (it_have_one_possibility(i, j))
			g_board[i][j].checked = 1;
		n = return_first_possibility(i, j);
		remove_possibility(i, j, n);
		if (!g_backup_filled)
		{
			copy_to_backup();
			g_backup_filled = 1;
		}
		add_number(i, j, n);
		return ;
	}
	else
	{
		g_o = 0;
		while (g_o < NUM)
		{
			g_board[i][j].poss[g_o] = g_very_first_backup[i][j].poss[g_o];
			g_o++;
		}
	}
}

void	pick_one_poss(void)
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
			{
				pick_one_one_iter(i, j);
			}
			j++;
		}
		i++;
	}
}
#endif
