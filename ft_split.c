/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:10:10 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 17:03:05 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{	
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	while (s[i] != '\0' )
	{
		if (s[i] == c)
			j++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 2));
	str[j + 1] = (char *) '\0';
	i = 0;
	j = 0;
	while (s[j] != '\0' )
	{
		while (s[j] != '\0' && s[j] != c)
		{
			j++;
		}
		str[i] = (char *)malloc(sizeof(char) * j + 1);
		ft_strlcpy(str[i], s, j + 1);
		s = s + j + 1;
		i++;
		j = 0;
	}
	return (str);
}
