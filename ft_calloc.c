/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:10:47 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/04 15:11:57 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	arr = malloc(count * size);
	if (arr == NULL)
		return (NULL);
	while (i < (size * count))
	{
		((char *) arr)[i] = 0;
		i++;
	}
	return (arr);
}
/*
int main() {
    // Tamaño del arreglo
    size_t num_elements = 3;

    // Tamaño en bytes de cada elemento
    size_t element_size = sizeof(int);

    // Llamada a ft_calloc para asignar memoria para un arreglo de enteros
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Impresión del arreglo
    printf("Arreglo asignado con ft_calloc:\n");
    for (size_t i = 0; i < num_elements; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberar la memoria asignada
    free(arr);

    return 0;
}*/
