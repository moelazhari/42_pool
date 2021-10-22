/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:19:22 by mazhari           #+#    #+#             */
/*   Updated: 2021/09/27 16:36:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[(unsigned int)c / 16]);
	ft_putchar(hex[(unsigned int)c % 16]);
}

void	ft_putstr_non_printable(char	*str)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 32 || c > 126)
		{
			ft_putchar(92);
			print_hex(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}
