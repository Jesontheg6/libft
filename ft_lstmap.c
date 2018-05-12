/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 04:44:13 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/10 08:02:03 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

		if (lst != NULL && f !=NULL)
		{
			newlist = f(lst);
			if (newlist != NULL && lst->next != NULL)
				newlist->next = ft_lstmap(lst ->next, f);
			return (newlist);
		}
		return (NULL);
}
