/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:17:17 by mazhari           #+#    #+#             */
/*   Updated: 2021/09/30 10:58:11 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && size_dest + i < size - 1)
		{
			dest[size_dest + i] = src[i];
			i++;
		}
		dest[size_dest + i] = '\0';
	}
	if (size > size_dest)
		return (size_src + size_dest);
	else
		return (size_src + size);
}
