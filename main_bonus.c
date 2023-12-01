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

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		i;
	int		fd;
	int		fd2;
	int		fd3;

	i = 0;
	fd = open("foo.txt", O_RDONLY);
	fd2 = open("foo2.txt", O_RDONLY);
	fd3 = open("foo3.txt", O_RDONLY);
	line = "Existencia";
	while (i++ < 4)
	{
		line = get_next_line(fd);
		printf("[%02d] -> %s", i, line);
		line = get_next_line(fd2);
		printf("[%02d] -> %s", i, line);
		line = get_next_line(fd3);
		printf("[%02d] -> %s", i, line);
	}
	free(line);
	close(fd);
	return (0);
}
