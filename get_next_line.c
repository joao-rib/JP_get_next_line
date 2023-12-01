/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-rib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:29:54 by joao-rib          #+#    #+#             */
/*   Updated: 2023/10/24 17:30:10 by joao-rib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_clean_chunk(char *chunk)
{
	char	*newchunk;
	int		i;
	int		j;

	i = 0;
	while (chunk[i] != '\0' && chunk[i] != '\n')
		i++;
	if (chunk[i] == '\0')
	{
		free(chunk);
		return (NULL);
	}
	newchunk = malloc((ft_strlen(chunk) - i) * sizeof(char));
	if (!newchunk)
		return (NULL);
	j = 0;
	i++;
	while (chunk[i] != '\0')
		newchunk[j++] = chunk[i++];
	newchunk[j] = '\0';
	free(chunk);
	return (newchunk);
}

static char	*ft_trim_line(char *chunk)
{
	char	*line;
	int		i;

	i = 0;
	if (!chunk[i])
		return (NULL);
	while (chunk[i] != '\0' && chunk[i] != '\n')
		i++;
	if (chunk[i] == '\n')
		line = malloc(sizeof(char) * (i + 2));
	else
		line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (chunk[i] != '\0' && chunk[i] != '\n')
	{
		line[i] = chunk[i];
		i++;
	}
	if (chunk[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*ft_get_chunk(int fd, char *chunk)
{
	char	*buff;
	int		i;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strchr(chunk, '\n') && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i < 0)
		{
			free(buff);
			free(chunk);
			return (NULL);
		}
		buff[i] = '\0';
		chunk = ft_strbuild(chunk, buff);
	}
	free(buff);
	return (chunk);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*chunk;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	chunk = ft_get_chunk(fd, chunk);
	if (!chunk)
		return (NULL);
	line = ft_trim_line(chunk);
	chunk = ft_clean_chunk(chunk);
	return (line);
}
