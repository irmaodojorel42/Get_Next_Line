/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:10 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 22:06:39 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_find_nl(char *str);
int		ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);

#endif
