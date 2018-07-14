/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zack <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:31:13 by zack              #+#    #+#             */
/*   Updated: 2018/07/14 17:39:30 by zack             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "stdlib.h"

void	ft_arrdel(char ***arr)
{
	char *next;
	while (**arr)
	{
		next = **arr + 1;
		free(**arr);
		**arr = NULL;
		**arr = next;
	}
	*arr = NULL;
}
