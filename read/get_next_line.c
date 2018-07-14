/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:28:21 by zbatik            #+#    #+#             */
/*   Updated: 2018/07/09 17:24:41 by zbatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

static t_list	*get_file_info(t_list **file_list, int fd)
{
	t_list	*tmp;
	t_list	*new_node;

	tmp = *file_list;
	while (tmp)
	{
		if ((size_t)fd == tmp->content_size)
			return (tmp);
		tmp = tmp->next;
	}
	new_node = ft_lstnew("\0", (size_t)fd);
	ft_lstadd(file_list, new_node);
	return (*file_list);
}

static int		ft_read(const int fd, char *buf, char **content)
{
	int		ret;

	ret = read(fd, buf, BUFF_SIZE);
	if (ret < 0)
		return (-1);
	buf[ret] = 0;
	*content = ft_strreplace(content, ft_strjoin(*content, buf));
	if (*content == NULL)
		return (-1);
	return (ret);
}

static int		ft_add(int fd, t_list *file)
{
	char	buf[BUFF_SIZE + 1];
	int		move;
	int		ret;

	move = 0;
	while ((ret = ft_read(fd, buf, (char **)&(file->content))) > 0)
	{
		if (ret < 0)
			return (-1);
		if (ft_element('\n', move + (file->content)))
			break ;
		move += ret;
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*file_list;
	t_list			*file;
	int				ret;

	if (fd < 0 || BUFF_SIZE < 1 || line == NULL || 0 > read(fd, "", 0))
		return (-1);
	file = get_file_info(&file_list, fd);
	ret = ft_add(fd, file);
	if (ret == 0 && 0 == *(char *)(file->content))
		return (0);
	*line = ft_strctake(file->content, '\n');
	file->content = ft_strcdrop(file->content, '\n');
	return (1);
}
