/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:05:16 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 18:07:35 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*a;

	a = (0);
	while (*string)
	{
		if (*string == symbol)
		{
			a = (char*)string;
		}
		string++;
	}
	if (a)
		return (a);
	if (symbol == '\0')
		return ((char*)string);
	return (0);
}
