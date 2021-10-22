/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:31:32 by mazhari           #+#    #+#             */
/*   Updated: 2021/10/06 16:31:34 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	tab = malloc(len * sizeof(int));
	if (!(tab))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
