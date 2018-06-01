/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:46:41 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/31 18:22:57 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[i])
	{
		i++;
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}
