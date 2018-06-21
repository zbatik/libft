/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdrop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:46:23 by zbatik            #+#    #+#             */
/*   Updated: 2018/06/21 17:51:15 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdrop(char const *str, char c)
{
	char	*drop;
	int		ind;

	ind = ft_indexcin(str, c);
	if (ind < -1)
		drop = ft_strdup(str);
	else
		drop = ft_strdrop(str, ind);
	return (drop);
}
