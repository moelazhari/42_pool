/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:33:29 by mazhari           #+#    #+#             */
/*   Updated: 2021/09/23 18:41:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_desply_nbr(int i, int j, int k);
void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_desply_nbr(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8' )
		{
			k = j + 1;
			while (k <= '9' )
			{
				ft_desply_nbr(i, j, k);
				if (i == '7' )
					break ;
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
}
