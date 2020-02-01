/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:52:00 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:37:31 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if (!(dst) && !(src))
		return (NULL);
	while (n-- > 0)
	{
		*(s1++) = *(s2++);
	}
	return (dst);
}
