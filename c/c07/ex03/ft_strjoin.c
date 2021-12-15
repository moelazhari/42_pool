/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:53:00 by mazhari           #+#    #+#             */
/*   Updated: 2021/10/07 20:08:08 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	len_of_str(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	len += (i * (size - 1)) + 1;
	return (len);
}

void	copy_to_rus(int size, char **strs, char *sep, char *rus)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			rus[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] != 0)
		{
			rus[k] = sep[j];
			k++;
			j++;
		}	
		i++;
	}
	rus[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rus;
	int		len;

	if (size == 0)
	{
		rus = malloc(sizeof(char));
		*rus = 0;
		return (rus);
	}
	len = len_of_str(size, strs, sep);
	rus = malloc(len * sizeof(char));
	copy_to_rus(size, strs, sep, rus);
	return (rus);
}
