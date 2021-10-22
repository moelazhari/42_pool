/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:59:22 by mazhari           #+#    #+#             */
/*   Updated: 2021/09/24 06:46:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_print_comb2(void);
void	ft_display_comb2(int i, int j);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}	
}

void	ft_display_comb2(int i, int j)
{
	if (i <= 9 )
	{
		ft_putchar('0');
	}
	ft_putnbr(i);
	ft_putchar(' ');
	if (j <= 9 )
	{
		ft_putchar('0');
	}
	ft_putnbr(j);
}	

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_display_comb2(i, j);
			if (i == 98 )
			{
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i++;
	}
}
