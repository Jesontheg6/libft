/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljunzhen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 01:47:45 by ljunzhen          #+#    #+#             */
/*   Updated: 2018/05/17 06:40:33 by ljunzhen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsplit(char const *s, char c)
{
	unsigned	i;
	int 	cntr;

	i = 0;
	cntr = 0;

		while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cntr++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (cntr);
}
/*This next function is a variation of the ft_strdup function we have
 * previously made. According to the man the ft_strdup function allocates
 * sufficient memory for a copy of the given string, does the copy, and returns
 * a pointer to it. The ft_strndup function copies at most n (our size_t
 * parameter) characters from the given string, always NULL terminating the
 * copied string.*/
static char			*ft_strndup(const char *s, size_t n)
{
	/*We start by creating a string variable that we will be allocating memory
	 * to and that we will be returning as the result of this function. We
	 * allocate the memory for this string by using this function's parameter
	 * of n. We get this parameter from our ft_strsplit function. It is the
	 * length of one of the words that we a splitting into a table. We add 1 to
	 * this in the malloc function to ensure space for a terminating '\0'. We
	 * then check to see if the memory allocation failed. If it did we will
	 * return NULL. If the allocation succeeded then we want to place our word
	 * into our fresh string str. We do this by using our previously made
	 * ft_strncpy function. We give ft_strncpy our memory allocated 'fresh'
	 * string, the parameter string s (which is taken from ft_strsplit but has
	 * been put in the ft_strndup function at the index the word we want to
	 * place into str will start from) and the size_t parameter n. We then make
	 * sure to add a terminating character to the end of our fresh string and
	 * then return it. */
	char			*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
/*With the two previous functions made we are now ready to begin our real
 * function, ft_strsplit*/
