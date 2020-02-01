/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:06:32 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 18:06:34 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;

	begin = 0;
	if (!s)
		return (NULL);
	while (ft_iswhitespace(s[begin]))
		begin++;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[end - 1]))
		end--;
	if (end < begin)
		end = begin;
	return (ft_strsub(s, begin, end - begin));
}
