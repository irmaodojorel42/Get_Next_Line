/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/24 18:43:36 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
    char    *line;
    static char	buffer[BUFFER_SIZE];
    int c;
    
    line = ft_strjoin(0, buffer);
    c = read(fd, buffer, BUFFER_SIZE);
    while (c > 0 || *buffer != 0)
	{
		line = ft_strjoin(line, buffer);
	}
    return (line);
}