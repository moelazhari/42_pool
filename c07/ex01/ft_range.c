/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:59:42 by mazhari           #+#    #+#             */
/*   Updated: 2021/10/06 09:14:17 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	tab = malloc(len * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
