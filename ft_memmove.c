/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:45:30 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 19:13:37 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if ((char *)dst < (char *)src)
	{
		while (len >= 1)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
			len--;
		}
	}
	else
	{
		while (len >= 1)
		{
			((char *)dst)[len - 1] = ((char *) src)[len - 1];
			len--;
		}
	}
	return (dst);
}
/* 
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char buffer1[20]; // Array para almacenar la copia de la función ft_memmove
    char buffer2[20]; // Array para almacenar la copia de la función memmove

    // Llamada a tu implementación ft_memmove
    ft_memmove(buffer1, str, strlen(str) + 1);

    // Llamada a la función original memmove
    memmove(buffer2, str, strlen(str) + 1);

    // Comparamos los resultados de ambas funciones
    if (strcmp(buffer1, buffer2) == 0) {
        printf("Las copias de ft_memmove y memmove son iguales: %s\n", buffer1);
    } else {
        printf("Las copias de ft_memmove y memmove son diferentes:\n");
        printf("ft_memmove: %s\n", buffer1);
        printf("memmove:    %s\n", buffer2);
    }

    return 0;
}
*/
