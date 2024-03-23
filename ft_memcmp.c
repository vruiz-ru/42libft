/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:13:42 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 15:01:02 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
 *Esta función compara los primeros 'n' bytes de dos zonas de memoria.
 *
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
int main() {
    char s1[] = "Hola Mundo";
    char s2[] = "Hola mundo";

    int resultado = memcmp(s1, s2, sizeof(s1));
    printf("memcmp: %d\n", resultado);

	resultado = ft_memcmp(s1, s2, sizeof(s1));
	printf("ft_memcmp: %d\n", resultado);

    return 0;
}*/
