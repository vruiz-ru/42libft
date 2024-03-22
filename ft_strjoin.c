/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:07:23 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/22 18:54:29 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len_dst;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_dst = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *)malloc(len_dst);
	if (dst == 0)
		return (NULL);
	while (*s1)
	{
		dst[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		dst[i] = *s2;
		i++;
		s2++;
	}
	dst[i] = 0;
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char const *s1;
	char const *s2;
	char *result;
	
	s1 = NULL;
	s2 = " mundo!";
	result = ft_strjoin(s1, s2);
	printf("Prueba: %s\n", result);
	free(result);

	s1 = "Hola,";
	s2 = "";
	result = ft_strjoin(s1, s2);
	printf("Prueba sin 1: %s\n", result);
	free(result);

	s1 = "";
	s2 = " mundo!";
	result = ft_strjoin(s1, s2);
	printf("Prueba sin 2: %s\n", result);
	free(result);

	s1 = "";
	s2 = "";
	result = ft_strjoin(s1, s2);
	printf("Prueba vacía: %s\n", result);
	free(result);

    return 0;
}*/
