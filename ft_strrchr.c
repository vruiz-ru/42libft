/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 15:48:27 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
/*
 * Esta función busca la última aparición de un carácter en una cadena.
 *
#include <string.h>
#include <stdio.h>

int main()
{
	char str[11] = "Hola mundo";
	char caracter = 'j';
	char *resultado = strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
	resultado = ft_strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
}

int main (int argc, char *argv[])
{
	(void)argc;
	int	ch;

	ch = argv[2][0];
	argv++;
	printf("cadena  :%s\n", (*argv));
	printf("caracter:%c\n", (ch));
	printf("ft      :%s\n", ft_strrchr(*argv, ch));	
	printf("original:%s\n", strrchr(*argv, ch));
	return (0);
}*/
