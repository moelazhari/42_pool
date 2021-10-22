/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved_last4.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:15:34 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:34:07 by hbenzzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVED_LAST4_H
# define IS_SOLVED_LAST4_H

int	check_colup23(void)
{
	int	j;
	int	n;

	j = 0;
	while (j < NUM)
	{
		n = g_colup[j];
		if (n == 2)
			if (colup_case_2(&j) == 0)
				return (0);
		if (n == 3)
			if (colup_case_3(&j) == 0)
				return (0);
		j++;
	}
	return (1);
}

int	check_coldown23(void)
{
	int	j;
	int	n;

	j = 0;
	while (j < NUM)
	{
		n = g_coldown[j];
		if (n == 2)
			if (coldown_case_2(&j) == 0)
				return (0);
		if (n == 3)
			if (coldown_case_3(&j) == 0)
				return (0);
		j++;
	}
	return (1);
}

int	check_rowleft23(void)
{
	int	i;
	int	n;

	i = 0;
	while (i < NUM)
	{
		n = g_rowleft[i];
		if (n == 2)
		{
			if (rowleft_case_2(&i) == 0)
				return (0);
		}
		if (n == 3)
			if (rowleft_case_3(&i) == 0)
				return (0);
		i++;
	}
	return (1);
}

int	check_rowright23(void)
{
	int	i;
	int	n;

	i = 0;
	while (i < NUM)
	{
		n = g_rowright[i];
		if (n == 2)
			if (rowright_case_2(&i) == 0)
				return (0);
		if (n == 3)
			if (rowright_case_3(&i) == 0)
				return (0);
		i++;
	}
	return (1);
}

#endif
