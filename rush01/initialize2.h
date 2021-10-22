/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:33:38 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 15:46:43 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZE2_H
# define INITIALIZE2_H
# include "initialize.h"

void	initialize_colup(void)
{
	int	i;
	int	j;
	int	n;

	n = 1;
	i = 0;
	j = 0;
	while (j < NUM)
	{
		initialize_array(g_colup, &i, &j, 0);
		if (g_colup[j] == NUM)
		{
			while (i < NUM)
			{
				add_number(i, j, n);
				n++;
				i++;
			}
		}
		n = 1;
		i = 0;
		j++;
	}	
}

void	initialize_rowright(void)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 3;
	n = 1;
	while (i < NUM)
	{
		initialize_array(g_rowright, &i, &j, 1);
		if (g_rowright[i] == NUM)
		{
			while (j >= 0)
			{
				add_number(i, j, n);
				n++;
				j--;
			}
		}
		n = 1;
		j = 3;
		i++;
	}	
}

void	initialize_coldown(void)
{
	int	i;
	int	j;
	int	n;

	j = 0;
	i = 3;
	n = 1;
	while (j < NUM)
	{
		initialize_array(g_coldown, &i, &j, 0);
		if (g_coldown[j] == NUM)
		{
			while (i >= 0)
			{
				add_number(i, j, n);
				n++;
				i--;
			}
		}
		n = 1;
		i = 3;
		j++;
	}	
}

void	initialize_rowleft(void)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 1;
	while (i < NUM)
	{
		initialize_array(g_rowleft, &i, &j, 1);
		if (g_rowleft[i] == NUM)
		{
			while (j <= 3)
			{
				add_number(i, j, n);
				n++;
				j++;
			}
		}
		n = 1;
		j = 0;
		i++;
	}	
}

void	initialize_values(void)
{
	initialize_colup();
	initialize_rowright();
	initialize_coldown();
	initialize_rowleft();
}
#endif
