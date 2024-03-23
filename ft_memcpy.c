/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:40:37 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 15:04:12 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
 * Esta función copia los primeros 'n' bytes de la zona de memoria apuntada por 
 * 'src' a la zona de memoria apuntada por 'dst', y devuelve un puntero a 'dst'
 *
#include <string.h>

int main () {
    const char src[50] = "Holaaaaa!!";
	const char src2[50] = "Mundo ";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Antes memcpy dest = %s\n", dest);

    memcpy(dest, src, strlen(src)+1);
    printf("Despues memcpy dest = %s\n", dest);

	ft_memcpy(dest, src2, strlen(src2)+1);
	printf("Despues ft_memcpy dest = %s\n", dest);	

    return(0);
}*/
