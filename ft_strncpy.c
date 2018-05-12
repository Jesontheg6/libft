/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 01:12:09 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/02 01:14:44 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strncpy( char* dest, const char* src, size_t len)
{
	size_t i;

	i = 0;
	while ( src[i] < len)
	{
		dest[i] = src[i];
			i++;
	}
	while (i < len)
	{
		dest[i++] = '\0';
			return(dst);
	}
}
