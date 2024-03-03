/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 05:17:28 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last > 0)
		return ((char *)(s + last));
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
	printf("ft      :%s\n", ft_strrchr(*argv, ch));	
	printf("original:%s\n", strrchr(*argv, ch));
	return (0);
}*/
