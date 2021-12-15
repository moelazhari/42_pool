/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:57:31 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 19:00:58 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ERROR_H
# define CHECK_ERROR_H

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

int	error(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	if (ft_strlen(av[1]) != 31)
		return (0);
	while (av[1][i] != '\0')
	{
		if (av[1][i] >= '1' && av[1][i] <= '4')
			i++;
		else
			return (0);
		if (i == 31)
			return (1);
		if (av[1][i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
#endif
