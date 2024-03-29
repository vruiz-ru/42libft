/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:24:16 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 16:11:07 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return ((size_t)(i));
}
/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	const char *str = "Holaquetalmellamojuan";

	printf("Longitud de la cadena: %zu\n", ft_strlen(str));
	printf("Longitud de la cadena (original): %zu\n", strlen(str));

	return 0;
}*/
