/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_vars.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:43:25 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 14:47:58 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H
# define NUM	4

struct	s_square {
	int	num;
	int	poss[NUM];
	int	checked;
};

struct s_square	g_board[NUM][NUM];
struct s_square	g_board_backup[NUM][NUM];
struct s_square	g_very_first_backup[NUM][NUM];
int				g_backup_filled;
int				g_colup[NUM];
int				g_coldown[NUM];
int				g_rowleft[NUM];
int				g_rowright[NUM];
#endif
