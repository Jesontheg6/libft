/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 03:44:37 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/20 07:42:52 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(coid const *content, size_t content_size)
{
	t_list	*new;
	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return( NULL);
	if (contnet == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return(NULL);
		ft_memove(new->content, content, content_size);
		new->content_size = content_size
	}
	new->next = NULL;
	return(new);
}	
