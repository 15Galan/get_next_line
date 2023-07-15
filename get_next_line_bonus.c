/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:58:34 by antgalan          #+#    #+#             */
/*   Updated: 2023/07/16 01:45:59 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_one_line(char *str)
{
	char	*line;
	int		i;

	if (!*str)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*readed[1024] = {NULL};
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(readed[fd], '\n') && 0 < bytes)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(readed[fd]), readed[fd] = NULL, NULL);
		buffer[bytes] = '\0';
		readed[fd] = update_readed(readed[fd], buffer);
		if (!readed[fd])
			return (NULL);
	}
	line = get_one_line(readed[fd]);
	readed[fd] = delete_line(readed[fd]);
	return (line);
}

char	*delete_line(char *str)
{
	char	*new;
	char	*aux;
	int		i;

	aux = ft_strchr(str, '\n');
	if (!aux)
	{
		free (str);
		return (NULL);
	}
	aux++;
	new = malloc(ft_strlen(aux) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (*aux != '\0')
	{
		new[i] = *aux;
		aux++;
		i++;
	}
	new[i] = '\0';
	free (str);
	return (new);
}

char	*update_readed(char *str, char *buffer)
{
	char	*updated;

	if (!str)
	{
	str = malloc(1);
	str[0] = '\0';
	}
	if (!str)
		return (NULL);
	updated = ft_strjoin(str, buffer);
	free (str);
	return (updated);
}
