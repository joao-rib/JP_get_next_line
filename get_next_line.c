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

//#include "libft.h"
#include "get_next_line.h"
//#include <stdio.h>

/*static int	prf_ptr(unsigned long v)
{
	int	l;

	if (!v)
		l = write(1, "(nil)", 5);
	else
	{
		l = write(1, "0x", 2);
		l += ft_putnbr_lbase_fd(v, HEXA_LOW, 1);
	}
	return (l);
}

static int	check_format(const char c, va_list args)
{
	int	p;

	p = -2;
	if (c == 'd' || c == 'i')
		p += ft_putnbr_fd((long)va_arg(args, int), 1);
	else if (c == 'u')
		p += ft_putnbr_ubase_fd(va_arg(args, unsigned int), DECIMAL, 1);
	else if (c == 'x')
		p += ft_putnbr_ubase_fd(va_arg(args, unsigned int), HEXA_LOW, 1);
	else if (c == 'X')
		p += ft_putnbr_ubase_fd(va_arg(args, unsigned int), HEXA_UPP, 1);
	else if (c == 'c')
		p += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		p += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'p')
		p += prf_ptr(va_arg(args, unsigned long));
	else
		p += ft_putchar_fd(c, 1);
	return (p);
}*/

char	*get_next_line(int fd)
{
	char	*line;
//	int		i;
//	int		p;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
/*	i = 0;
	p = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			if (ft_strchr(CONVERSION, string[i]))
				p += check_format(string[i], args);
			else
				ft_putchar_fd(string[i], 1);
		}
		else
			ft_putchar_fd(string[i], 1);
		i++;
	}*/
	return (line);
}

/*ssize_t	read(int fd, void *buff, size_t count)

fd = file descriptor
buff = read data will be stored here
count = number of bytes to read (buffer size)
*/
