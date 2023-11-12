/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-rib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:29:54 by joao-rib          #+#    #+#             */
/*   Updated: 2023/10/24 17:30:10 by joao-rib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.c"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
 	char	*line;
 	int		i;
 	int		fd;

	i = 1;
 	fd = open("foo2.txt", O_RDONLY);
 //	line = (char *)-1;
 	while (line)
 	{
 		line = get_next_line(fd);
 		if (!line)
 			break ;
 		printf("[Line %d] -> %s", i, line);
 		i++;
 	}
 	free(line);
 	close(fd);
 	return (0);
}

/*int	main(void)
{
 	char	*line;
 	int		i;
 	int		fd;

	i = 0;
 	fd = open("foo2.txt", O_RDONLY);
 	line = (char *)-1;
 	while (line)
 	{
 		line = get_next_line(fd);
 		if (!line)
 			break ;
 		printf("[%02d] -> %s", i++, line);
 	}
 	free(line);
 	close(fd);
 	return (0);
}*/
