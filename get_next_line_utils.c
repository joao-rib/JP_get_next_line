/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-rib <joao-rib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:29:54 by joao-rib          #+#    #+#             */
/*   Updated: 2023/11/30 23:26:09 by joao-rib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!str)
		return (0);
	len = ft_strlen(str);
	while (i <= len || (unsigned char)c == '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&((char *)str)[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size, size_t d)
{
	size_t	i;

	i = 0;
	while ((d + 1) < size && src[i] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (0);
}

char	*ft_strbuild(char *s1, const char *s2)
{
	char	*joined;
	size_t	l;
	size_t	l1;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l = l1 + ft_strlen(s2) + 1;
	joined = malloc(l * sizeof(char));
	if (!joined)
		return (NULL);
	joined[0] = '\0';
	ft_strlcat(joined, s1, l, 0);
	ft_strlcat(joined, s2, l, l1);
	free(s1);
	return (joined);
}
