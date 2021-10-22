/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:57:29 by mazhari           #+#    #+#             */
/*   Updated: 2021/10/04 18:00:05 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{			
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
