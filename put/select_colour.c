/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_colour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 12:34:59 by zbatik            #+#    #+#             */
/*   Updated: 2018/07/27 16:30:53 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colour.h"

char	*select_colour(t_colour colour)
{
	switch (colour)
	{
		case r :
			return (ANSI_COLOUR_RED);
		case g :
			return (ANSI_COLOUR_GREEN);
		case y :
			return (ANSI_COLOUR_YELLOW);
		case b :
			return (ANSI_COLOUR_BLUE);
		case m :
			return (ANSI_COLOUR_MAGENTA);
		case c :
			return (ANSI_COLOUR_CYAN);
		default :
			return ("");
	}
}
