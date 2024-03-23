/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:05:06 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 16:15:53 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
Esta función se utiliza para copiar una cadena de origen a 
una cadena de destino de manera segura, evitando 
desbordamientos de búfer.
La función devuelve la longitud de la cadena de origen. Esto es 
útil porque permite a los llamadores de la función saber si la cadena de 
origen se truncó al copiarla a la cadena de destino.
 *
 *
#include <string.h>
#include <stdio.h>

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
