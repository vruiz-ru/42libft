/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:08:54 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 16:27:07 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != 0 && n_len + i <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>

int main() {
    const char *cadena1 = "Hola, ¿cómo estás?";
    const char *cadena2 = "¿cómo";

	char *resultado = strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con strnstr %s\n", resultado);

	resultado = ft_strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con ft_strnstr %s\n", resultado);

    return 0;
}*/
