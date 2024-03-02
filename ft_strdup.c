/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:59:28 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/02 18:58:16 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char * ft_strdup(const char *s1)
{
	char *dst;

	dst	= (char *)malloc((strlen(s1)) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy (dst, s1);
	return (dst);
}

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
}


			
