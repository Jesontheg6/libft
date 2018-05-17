/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 01:41:25 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/17 06:27:09 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t x;
	size_t n;

	n = 0;
	x = ft_strlen(src);
	i = ft_strlen(dst);
	if (i >= size)
		return (x + size);
	while (src[n] && (n + i) < (size - 1))
	{
		dst[i + n] = src[n];
		n++;
	}
	dst[i + n] = '\0';
	return (x + i);
}
