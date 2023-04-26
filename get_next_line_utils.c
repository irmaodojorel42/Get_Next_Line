/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:03 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/26 18:52:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
	if (!str)
		return (0);
    while (str[i] && str[i] != '\n')
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*result;

	if (s2[0] == '\0')
		return (0);
	i = 0;
	j = -1;
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[++j])
	{
		result[i++] = s2[j];
		if (s2[j] == '\n' || s2[j] == 0)
			break ;
	}
	if (s1)
		free(s1);
	return (result);
}

int	ft_find_nl(char *str)
{
	int	i;
	int	j;
	int	new_line;

	i = 0;
	j = 0;
	new_line = 0;
	while (str[i] != 0 && str[i] != '\n')
		str[i++] = '\0';
	if (str[i] == '\n')
	{
		new_line = 1;
		str[i++] = '\0';
		while (str[i] != 0)
		{
			str[j++] = str[i];
			str[i++] = '\0';
		}
	}
	return (new_line);
}