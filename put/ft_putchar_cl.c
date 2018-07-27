/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_cl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 12:11:05 by zbatik            #+#    #+#             */
/*   Updated: 2018/07/27 16:29:09 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putchar_cl(char c, t_colour colour)
{
	ft_putstr(select_colour(colour));
	ft_putchar(c);
	ft_putstr(ANSI_COLOUR_RESET);
}
