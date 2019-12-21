/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhomich <mkhomich@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:17:48 by mkhomich          #+#    #+#             */
/*   Updated: 2019/01/14 16:39:28 by mkhomich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	buf_line(char **fil, char **line)
{
	char *buf;

	if ((*fil)[0] == '\0')
		return (0);
	if (ft_strchr(*fil, '\n') != NULL)
	{
		*(ft_strchr(*fil, '\n')) = '\0';
		*line = ft_strdup(*fil);
		buf = ft_strdup(ft_strchr(*fil, '\0') + 1);
		free(*fil);
		if (buf)
		{
			*fil = ft_strdup(buf);
			free(buf);
		}
	}
	else
	{
		*line = ft_strdup(*fil);
		ft_memdel((void**)fil);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	int			stat;
	char		buffer[BUFF_SIZE + 1];
	static char	*fil[10000];

	if (fd == -1 || read(fd, buffer, 0) < 0 || !line)
		return (-1);
	if (!(fil[fd]))
		fil[fd] = ft_strnew(0);
	while (ft_strchr(fil[fd], '\n') == NULL)
	{
		stat = read(fd, buffer, BUFF_SIZE);
		buffer[stat] = '\0';
		if (stat == 0)
			break ;
		fil[fd] = ft_realloc(fil[fd], ft_strlen(fil[fd]),
			ft_strlen(fil[fd]) + BUFF_SIZE + 1);
		fil[fd] = ft_strcat(fil[fd], buffer);
		if (!(fil[fd]))
			fil[fd] = ft_strnew(0);
	}
	return (buf_line(&fil[fd], line));
}
