/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:08:46 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 15:47:27 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZE_H
# define INITIALIZE_H

void	initialize_array(int *p, int *i, int *j, int row)
{
	int	z;

	if (row)
		z = *i;
	else
		z = *j;
	if (p[z] == 1)
		add_number(*i, *j, NUM);
	if (p[z] == 2)
		remove_possibility(*i, *j, 4);
	if (p[z] == 3)
	{
		remove_possibility(*i, *j, 4);
		remove_possibility(*i, *j, 3);
	}
}
#endif
