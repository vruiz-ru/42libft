/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:58:44 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 05:10:34 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
int main (int argc, char *argv[])
{
	(void)argc;
	int	ch;

	ch = argv[2][0];
	argv++;
	printf("cadena  :%s\n", (*argv));
	printf("caracter:%c\n", (ch));
	printf("ft      :%s\n", ft_strchr(*argv, ch));	
	printf("original:%s\n", strchr(*argv, ch));
	return (0);
}*/
