/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:42:39 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 15:50:32 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((char *)b)[i] = (char) c;
		i++;
		len--;
	}
	return (b);
}
/*
 * Esta función llena los primeros 'len' bytes de la 
 * zona de memoria apuntada por 
 * 'b' con el byte 'c'.
 *
 *
#include <string.h>
#include <stdio.h>

int main()
{
    char str[11] = "Hola mundo";
    
	printf("%s\n", str);
    memset(str, '$', 6);
    printf("%s\n", str);
	strcpy(str, "Hola mundo");
	printf("%s\n", str);
	ft_memset(str, '#', 7);
	printf("%s\n", str);
    return 0;
}*/
