/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 02:34:00 by ljunzhen          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/05/25 14:08:27 by ljunzhen         ###   ########.fr       */
=======
/*   Updated: 2018/05/21 11:55:32 by ljunzhen         ###   ########.fr       */
>>>>>>> 89581787aff81fd61a635b4d404689e6f21ebb4b
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
