/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:05:06 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/04 17:01:58 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while ((src[i] != '\0') && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main (void)
{
	const char *src = "Holaquetalmellamojuan";
	const char *dst = "qqqqqqqqqqqqqqqqqqqqqqqqqq";
	size_t s;

	s = 7;

	printf("Longitud de la cadena: %zu\n", ft_strlcpy(dst,src,s));
	printf("Longitud de la cadena (original): %zu\n", strlcpy(dst,src,s));

	return 0;
}*/
