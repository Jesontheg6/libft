/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 17:18:03 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/04/27 18:55:52 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
  size_t i;
  char *d;
  const char *s;
  
  i = 0;
  d = dest; 
  s = src;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return(dest);
}
