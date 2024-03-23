/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:59:28 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 16:30:16 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc((ft_strlen(s1)) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
/*
Esta función se utiliza para crear una copia duplicada de una cadena de 
caracteres existente.
 *
 *
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	char *original = "Hola, mundo!";
	char *copia;

	copia = ft_strdup(original);
	if (copia == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return 1;
	}

	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", copia);

	free(copia);  // No olvides liberar la memoria!

	return 0;
}*/		
