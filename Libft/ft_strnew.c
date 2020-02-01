/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:05:06 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:41:23 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if (size + 1 == 0)
		return (NULL);
	if (!(s = ft_memalloc(size + 1)))
		return (NULL);
	while (i < size)
		s[i++] = '\0';
	return (s);
}
