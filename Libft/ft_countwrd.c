/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwrd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiffiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:51:51 by otiffiny          #+#    #+#             */
/*   Updated: 2019/09/21 21:42:05 by otiffiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwrd(char const *str, char c)
{
	int		i;
	size_t	num;

	i = 0;
	num = 0;
	while (*str)
	{
		if (i == 0 && *str != c)
			num++;
		i = (*str == c) ? 0 : 1;
		str++;
	}
	return (num);
}
