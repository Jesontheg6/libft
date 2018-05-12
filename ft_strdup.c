/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 01:07:04 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/02 00:40:57 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *str;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	while ( i < len)
	{
		str[i] = src[i];
		i++;
	}
	return(str);
}
