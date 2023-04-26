/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 18:49:39 by marvin           ###   ########.fr       */
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
    line = NULL;
    while (i > 0)
    {
        if (!buffer[0])
            i = read(fd, buffer, BUFFER_SIZE);
        if (i > 0)
            line = ft_strjoin(line, buffer);
        if (ft_find_nl(buffer) > 0)
            break ;
    }
    //printf("buffer: %s ", buffer);
    //printf("line: %s ", line);
    return (line);
}
    
