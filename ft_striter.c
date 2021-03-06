/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 01:46:51 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/30 22:53:06 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	unsigned int i;

	i = 0;
	if (s != NULL && f)
	{
		while (s[i] != '\0')
		{
			f(s + i);
			i++;
		}
		s[i] = '\0';
	}
}
