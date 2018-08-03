/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:28:21 by zbatik            #+#    #+#             */
/*   Updated: 2018/08/03 19:49:45 by zack             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/get_next_line.h"

char	**get_file_info(t_list **file_list, int fd)
{
	t_list	*tmp;
	t_list	*new_node;

	tmp = *file_list;
	while (tmp)
	{
		if ((size_t)fd == tmp->content_size)
			return ((char**)&(tmp->content));
		tmp = tmp->next;
	}
	new_node = ft_lstnew("\0", (size_t)fd);
	ft_lstadd(file_list, new_node);
	return ((char**)&((*file_list)->content));
}

static int		ft_read(int fd, char **content, int *ind)
{
	char	buf[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = 0;
		ft_strreplace(content, ft_strjoin(*content, buf));
		if (0 < (*ind = ft_indexcin(*content, '\n')))
			break ;
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*file_list;
	char		**content;
	int		ret;
	int		ind;

	if (fd < 0 || BUFF_SIZE < 1 || line == NULL || 0 > read(fd, "", 0))
		return (-1);
	content = get_file_info(&file_list, fd);
	ind = -1;
	ret = ft_read(fd, content, &ind);
	if (ret == 0 && 0 == **content)
		return (0);
	if (ind == -1)
	{
		*line = *content;
		*content = ft_strdup("");
	}
	else
	{
		(*content)[ind] = 0;
		*line = ft_strdup(*content);
		*content = ft_strdup(*content + ind);
	}
	return (1);
}
