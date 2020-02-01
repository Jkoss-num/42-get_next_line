/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:01:09 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:44:57 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t ulen)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src;
	if (!(dest) && !(src))
		return (NULL);
	if (s2 >= s1)
	{
		while (ulen--)
			*(s1++) = *(s2++);
	}
	else if (s2 < s1)
	{
		while (ulen--)
			*(s1 + ulen) = *(s2 + ulen);
	}
	return (dest);
}
