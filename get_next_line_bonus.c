/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 23:59:34 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE];
	int			i;

	i = 1;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0 || fd > FOPEN_MAX)
	{
		i = -1;
		while (buffer[fd][++i])
			buffer[fd][i] = 0;
		return (NULL);
	}
	line = NULL;
	while (i > 0)
	{
		if (!buffer[fd][0])
			i = read(fd, buffer[fd], BUFFER_SIZE);
		if (i > 0)
			line = ft_strjoin(line, buffer[fd]);
		if (ft_find_nl(buffer[fd]) > 0)
			break ;
	}
	return (line);
}