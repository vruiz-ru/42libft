/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:13:16 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/18 21:28:23 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;
	unsigned int	i;
	
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int main()
{
    char const *s;
    char *result;

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 5);
    printf("Prueba recortando len: %s\n", result);
    free(result);

	s = "Hola, mundo!";
    result = ft_substr(s, 5, 10);
    printf("Prueba aumentando start: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 500000000000);
    printf("Prueba con len demasiado largo: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 50000000, 5);
    printf("Prueba con start demasiado largo: %s\n", result);
    free(result);

    s = "";
    result = ft_substr(s, 0, 5);
    printf("Prueba con s vacío: %s\n", result);
    free(result);

    return 0;
}
*/
