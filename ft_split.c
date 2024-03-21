/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:10:10 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/21 18:06:19 by vruiz-ru         ###   ########.fr       */
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
	size_t	checkpoit;
	int		nstr;

	cont = 0;
	nstr = 0;
	checkpoit = 0;
	while (cont < len)
	{
		if (s[cont] != c)
		{
			checkpoit = cont;
			while (s[cont] != c && s[cont] != 0)
				cont++;
			matriz[nstr] = ft_substr(s, checkpoit, cont - checkpoit);
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

static int	ft_strworlds(char const *s, char c)
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

	len = ft_strlen(s);
	matriz = malloc((ft_strworlds(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		return (ft_split2(s, c, matriz, len));
	}
	return (0);
}
/*
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
