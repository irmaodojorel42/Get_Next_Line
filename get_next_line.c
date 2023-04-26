/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 14:43:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
    char    *line;
    static char     buffer[BUFFER_SIZE];
    int i;
    
    i = 1;
    if (fd == -1 || BUFFER_SIZE < 1)
        return (NULL);
    line = ft_strjoin(0, buffer);
    while (i > 0 || *buffer != 0)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        line = ft_strjoin(line, buffer);
        //printf("%s", buffer);
        if (ft_find_nl(buffer) > 0)
            break ;
    }
    printf("%s", line);
    return (line);
}
    
/*       if (ft_find_nl(buffer) > 0)
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
}*/