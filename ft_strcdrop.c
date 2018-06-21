/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdrop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:46:23 by zbatik            #+#    #+#             */
/*   Updated: 2018/06/21 18:40:27 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdrop(char const *str, char c)
{
	char	*drop;
	int		ind;

	ind = ft_min(ft_indexcin(str, c) + 1, ft_strlen(str) + 1);
	if (ind < -1)
		drop = ft_strdup(str);
	else
		drop = ft_strdrop(str, ind);
	return (drop);
}
