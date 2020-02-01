/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:48:19 by otiffiny          #+#    #+#             */
/*   Updated: 2019/10/24 23:22:04 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	verify(char **arr, char **line)
{
	int		i;
	char	*tmp_arr;
	char	*str;

	str = *arr;
	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == 0)
		{
			return (0);
		}
		i++;
	}
	tmp_arr = &str[i];
	*tmp_arr = '\0';
	*line = ft_strdup(*arr);
	*arr = ft_strdup(tmp_arr + 1);
	return (1);
}

static int	read_next_line(int fd, char *chr, char **arr, char **line)
{
	int		l;
	int		value;
	char	*tmp_arr;

	while (((l) = read(fd, chr, BUFF_SIZE)) > 0)
	{
		chr[l] = '\0';
		if (!*arr)
		{
			*arr = ft_strdup(chr);
		}
		else if (*arr)
		{
			tmp_arr = *arr;
			*arr = ft_strjoin(tmp_arr, chr);
			ft_memdel((void *)&tmp_arr);
			ft_strclr(chr);
		}
		if (verify(arr, line))
			break ;
	}
	value = l > 0 ? 1 : l;
	return (value);
}

int			get_next_line(const int fd, char **line)
{
	static char *arr[10241];
	char		*chr;
	int			i;
	int			value;

	i = 0;
	if (line == 0 || fd < 0 || fd >= (10241) || (read(fd, arr[fd], 0) < 0) \
	|| !(chr = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (arr[fd])
		if (verify(&arr[fd], line))
			return (1);
	while (i < BUFF_SIZE)
		chr[i++] = '\0';
	value = read_next_line(fd, chr, &arr[fd], line);
	ft_memdel((void *)&chr);
	if (value != 0 || arr[fd] == NULL || arr[fd][0] == '\0')
	{
		return (value);
	}
	*line = arr[fd];
	arr[fd] = NULL;
	return (1);
}
