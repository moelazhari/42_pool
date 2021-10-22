/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved_last.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:05:53 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 18:42:35 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVED_LAST_H
# define IS_SOLVED_LAST_H
# include "is_solved_last2.h"
# include "is_solved_last3.h"
# include "is_solved_last4.h"

int	is_solved_last(void)
{
	if (check_colup23() == 0)
		return (0);
	if (check_coldown23() == 0)
		return (0);
	if (check_rowleft23() == 0)
		return (0);
	if (check_rowright23() == 0)
		return (0);
	return (1);
}
#endif
