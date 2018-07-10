/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:02:32 by zbatik            #+#    #+#             */
/*   Updated: 2018/07/10 12:11:39 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_lines(const int fd, int skip)
{
	int		i;
	char	*line;

	if (skip < 1)
		return (-1);
	i = 0;
	ret = 1;
	while (i++ < skip && ret < 0)
	{
		ret = get_next_line(fd, &line);
		if (line != NULL)
			free(line);
	}
	return (ret);
}
