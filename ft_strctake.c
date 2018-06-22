/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctake.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:47:55 by zbatik            #+#    #+#             */
/*   Updated: 2018/06/22 11:48:28 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strctake(char const *str, char c)
{
	char	*take;
	int		ind;

	ind = ft_indexcin(str, c);
	if (ind < 0)
		take = ft_strdup(str);
	else
		take = ft_strtake(str, ind + 1);
	return (take);
}
