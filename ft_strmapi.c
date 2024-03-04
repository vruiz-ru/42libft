/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:02:50 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/04 17:39:56 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int	i;

	i = 0;
	dst = (char *)malloc(ft_strlen(s) + 1);
	if (dst == NULL)
		return (NULL);
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
/*
char mod(unsigned int index, char c)
{
	return (c + index);
}

int main (void)
{

	char	*str = "abcde";
	char	*mapi;

	mapi = ft_strmapi(str, mod);
	printf("%s\n", mapi);
	
	return 0;
}*/
