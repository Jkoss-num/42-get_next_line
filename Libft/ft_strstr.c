/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:34:19 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/13 18:11:53 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int a;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char*)str);
	}
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] != '\0' && str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
			{
				return ((char*)&str[i]);
			}
			++a;
		}
		++i;
	}
	return (0);
}
