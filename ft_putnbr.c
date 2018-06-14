/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zack <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 19:15:24 by zack              #+#    #+#             */
/*   Updated: 2018/05/30 16:36:39 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long l;

	l = (long)n;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
	else
	{
		ft_putchar(l + 48);
	}
}
