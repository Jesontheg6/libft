/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 20:39:23 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/12 03:03:15 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (d);
}
