/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:04:37 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/12 17:39:09 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[a] != '\0')
	{
		str1[i] = str2[a];
		i++;
		a++;
	}
	str1[i] = '\0';
	return (str1);
}
