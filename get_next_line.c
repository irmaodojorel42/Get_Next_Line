/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/24 23:48:37 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
    char    *line;
    static char	buffer[BUFFER_SIZE];
    int c;
    
    if (fd == -1 || BUFFER_SIZE < 1)
        return (NULL);
    line = ft_strjoin(0, buffer);
    if (ft_find_nl(buffer) > 0)
		return (line);
	c = read(fd, buffer, BUFFER_SIZE);
	if (c < 0)
	{
		free(line);
		return (NULL);
	}
    while (c > 0 || *buffer != 0)
	{
		line = ft_strjoin(line, buffer);
        if (ft_find_nl(buffer) > 0)
			break ;
		c = read(fd, buffer, BUFFER_SIZE);
	}
    return (line);
}