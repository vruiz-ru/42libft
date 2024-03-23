/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 01:02:25 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:07:32 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)s = '\0';
		s++;
		n--;
	}
}

/*
#include <strings.h>
#include <stdio.h>

int main() {
    char str[50] = "Hola Mundo!";
	char str2[50] = "Hola mundo!";
    printf("Antes de bzero: %s\n", str);

    bzero(str, sizeof(str));
    printf("Después de bzero: %s\n", str);

	printf("Antes de ft_bzero: %s\n", str2);
	ft_bzero(str2, sizeof(str2));
	printf("Despues de ft_bzero: %s\n", str2);

    return 0;
}*/
