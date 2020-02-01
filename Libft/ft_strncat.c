/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:37:11 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:39:32 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	size_t			a;

	i = 0;
	a = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[a] != '\0' && a < n)
	{
		str1[i] = str2[a];
		i++;
		a++;
	}
	str1[i] = '\0';
	return (str1);
}
