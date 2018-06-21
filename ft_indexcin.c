/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexcin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:54:11 by zbatik            #+#    #+#             */
/*   Updated: 2018/06/21 17:37:46 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_indexcin(const char *s, int c)
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (*(s + i) == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
