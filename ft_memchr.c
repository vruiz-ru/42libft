/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:24:15 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 03:40:40 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return ((void *)(unsigned char *) s);
		s++;
		n--;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	char	c;
	char	*s;
	int		n;
   
	(void) argc;
	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("%p\n\n", ft_memchr(s, c, n));
	printf("%p\n\n", memchr(s, c, n));
}*/
