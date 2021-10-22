/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:46:16 by mazzouzi          #+#    #+#             */
/*   Updated: 2021/10/03 15:48:49 by mazzouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTNBR_H
# define FT_PUTNBR_H
# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recur(unsigned int number)
{
	int	reminder;
	int	left;

	reminder = number % 10;
	left = number / 10;
	if (left != 0)
		ft_putnbr_recur(left);
	ft_putchar('0' + reminder);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
	{
		n = nb;
	}
	ft_putnbr_recur(n);
}
#endif
