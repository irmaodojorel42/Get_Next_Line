/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:56:24 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/24 23:30:21 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    char    *str;
    
    fd = open("test.txt", O_RDONLY);
    str = get_next_line(fd);
    printf("%s\n", str);
    return (0);
}