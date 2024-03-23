/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:10:10 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 17:17:54 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
	{
		free(matriz[nstr]);
	}
	free(matriz);
}

static char	**ft_split2(char const *s, char c, char	**matriz, size_t len)
{
	size_t	cont;
	size_t	checkpoint;
	int		nstr;

	cont = 0;
	nstr = 0;
	checkpoint = 0;
	while (cont < len)
	{
		if (s[cont] != c)
		{
			checkpoint = cont;
			while (s[cont] != c && s[cont] != 0)
				cont++;
			matriz[nstr] = ft_substr(s, checkpoint, cont - checkpoint);
			if (matriz[nstr++] == 0)
			{
				liberate(matriz, nstr - 1);
				return (0);
			}
		}
		cont++;
	}
	matriz[nstr] = 0;
	return (matriz);
}

static int	ft_strwords(char const *s, char c)
{
	int	cont;
	int	palabras;
	int	len;

	len = ft_strlen(s);
	palabras = 0;
	cont = 1;
	if (s[0] != c && s[0] != 0)
		palabras++;
	while (cont < len)
	{
		if (s[cont] != c && s[cont - 1] == c)
			palabras++;
		cont++;
	}
	return (palabras);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	matriz = malloc((ft_strwords(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		return (ft_split2(s, c, matriz, len));
	}
	return (0);
}
/*
*
La función divide una cadena de caracteres en varias palabras, donde las 
palabras están separadas por un carácter específico. La función devuelve un 
array de cadenas de caracteres, donde cada cadena es una palabra.

La función toma dos argumentos: una cadena de caracteres 's' y un carácter 'c'. 
El objetivo es dividir 's' en palabras que están separadas por el carácter 'c'.
 *
La función 'ft_strworlds' cuenta el número de palabras en una cadena de 
caracteres, donde las palabras están separadas por un carácter específico.
 *
La función 'liberate' se utiliza para liberar la memoria asignada a un array 
de cadenas de caracteres.
 *
La función 'ft_split2' divide una cadena de caracteres en varias palabras, 
donde las palabras están separadas por un carácter específico. La función 
llena un array de cadenas de caracteres, donde cada cadena es una palabra.

'cont' se usará como contador en un bucle, 'nstr' almacenará el número 
de palabras y 'checkpoit' se usará para marcar el inicio de una palabra.
 *
 *
#include <stdio.h>

int main()
{
    char **result;

    result = ft_split("Hola mundo como va la onda", ' ');

    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s$\n", result[i]);
    }

    return 0;
}
*/
