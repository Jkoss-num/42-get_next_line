/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:18:27 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/19 20:16:58 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int a;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char*)str);
	}
	while (str[i] != '\0' && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			a = 1;
			while (to_find[a] != '\0' && str[i + a] == to_find[a] && \
			(size_t)(i + a) < len)
			{
				a++;
			}
			if (to_find[a] == '\0')
				return ((char*)&str[i]);
		}
		i++;
	}
	return (0);
}
