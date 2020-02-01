/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:05:24 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:41:23 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	j;
	size_t	i;
	size_t	word;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(res = (char **)ft_memalloc((ft_countwrd(s, c) + 1) * sizeof(char *))))
		return (NULL);
	j = 0;
	word = 0;
	i = -1;
	start = 0;
	while (s[++i])
	{
		if (word && s[i] == c)
			res[j++] = ft_strsub(s, start, i - start);
		if (!word && s[i] != c)
			start = i;
		word = (s[i] == c) ? 0 : 1;
	}
	if (word)
		res[j] = ft_strsub(s, start, i - start);
	return (res);
}
