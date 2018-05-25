/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:55:23 by ljunzhen          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/25 14:14:26 by ljunzhen         ###   ########.fr       */
=======
/*   Updated: 2018/05/21 10:52:48 by ljunzhen         ###   ########.fr       */
>>>>>>> 89581787aff81fd61a635b4d404689e6f21ebb4b
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
