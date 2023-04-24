/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:04:03 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/25 00:05:21 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*result;
	char	*saveptr;
	
	if (s2[0] == '\0')
		return (0);
	i = 0;
	j = 0;
	result = malloc(sizeof(char) * (ft_strlen(s1) + BUFFER_SIZE + 1));
	saveptr = result;
	if (result == 0)
	{
		free(result);
		return (NULL);
	}
	while (s1[i] != 0 && s1 != 0)
		*result++ = s1[i++];
	if (s1 != 0)
		free(s1);
	while (s2[j] != '\n' && s2[j])
		*result++ = s2[j++];
	if (s2[j] == '\n')
		*result++ = '\n';
	result[i] = '\0';
	return (saveptr);
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