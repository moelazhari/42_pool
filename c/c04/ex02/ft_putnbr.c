/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:02:43 by mazhari           #+#    #+#             */
/*   Updated: 2021/10/05 09:35:26 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	
	

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	i = n;
	if (i <= 9)
	{
		ft_putchar(i + '0');
	}
	else
	{
		ft_putnbr(i / 10 );
		ft_putnbr(i % 10 );
	}
}
