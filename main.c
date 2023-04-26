/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:56:24 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 18:52:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    char    *str;
    
    fd = open("test.txt", O_RDONLY);
    str = "";
    while (str)
    {    
        str = get_next_line(fd);
        printf("%s\n", str);
        free(str);
    }
    return (0);
}