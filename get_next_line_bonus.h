/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-rib <joao-rib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:30:33 by joao-rib          #+#    #+#             */
/*   Updated: 2023/11/30 23:05:02 by joao-rib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 40
# endif

# define MAXFD 2000

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size, size_t d);
char	*ft_strbuild(char *s1, const char *s2);

#endif
