/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/20 19:26:39 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (last);
}
/*
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	(void)argc;
	int	ch;

	ch = argv[2][0];
	argv++;
	printf("cadena  :%s\n", (*argv));
	printf("caracter:%c\n", (ch));
	printf("ft      :%s\n", ft_strrchr(*argv, ch));	
	printf("original:%s\n", strrchr(*argv, ch));
	return (0);
}*/
