/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amya <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 06:23:22 by amya              #+#    #+#             */
/*   Updated: 2019/04/08 02:35:17 by amya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	k;

	k = (unsigned int)(n);
	if (n < 0)
	{
		ft_putchar('-');
		k = -k;
	}
	if (k <= 9)
		ft_putchar(k + '0');
	else
	{
		ft_putnbr(k / 10);
		ft_putchar(k % 10 + '0');
	}
}
