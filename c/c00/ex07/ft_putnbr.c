/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:02:43 by mazhari           #+#    #+#             */
/*   Updated: 2021/09/24 09:24:43 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-i);
	}
	else if (i <= 9)
	{
		ft_putchar(i + '0');
	}
	else
	{
		ft_putnbr(i / 10 );
		ft_putnbr(i % 10 );
	}
}
