/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 08:56:20 by lshabang          #+#    #+#             */
/*   Updated: 2019/08/06 13:59:19 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*new_line(const int fd, char **s, char **line, int pos)
{
	char			*tmp;

	tmp = ft_strdup(s[fd] + pos + 1);
	*line = ft_strsub(s[fd], 0, pos);
	free(s[fd]);
	s[fd] = tmp;
	return (*line);
}

static char		*reads(const int fd, char **s, char **line)
{
	int				i;

	i = 0;
	while (s[fd][i] != '\0' && s[fd][i] != '\n')
		i++;
	if (s[fd][i] == '\n')
		*line = new_line(fd, s, line, i);
	else if (s[fd][i] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (*line);
}

int				get_next_line(const int fd, char **line)
{
	static char		*s[2000];
	char			buff[BUFF_SIZE + 1];
	int				ret;
	char			*tmp;

	if (fd < 0 || line == NULL || BUFF_SIZE < 0)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(0);
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if ((ret == 0 && s[fd] == NULL) || s[fd][0] == '\0')
		return (0);
	*line = reads(fd, s, line);
	return (1);
}
