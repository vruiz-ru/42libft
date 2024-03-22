/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:34:32 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/22 19:51:56 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_comp_i(char const *s1, char const *set)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while ((set[s] != 0) && (s1[i] != 0))
	{
		if (s1[i] == set[s])
		{
			i++;
			s = -1;
		}
		s++;
	}
	return (i);
}

int	ft_comp_f(char const *s1, char const *set)
{
	int	f;
	int	s;

	f = (ft_strlen(s1)) - 1;
	s = 0;
	while ((set[s] != 0) && (f >= 0))
	{
		if (s1[f] == set[s])
		{
			f--;
			s = -1;
		}
		s++;
	}
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		f;
	int		len_trim;
	int		cont;
	char	*str_trim;

	if (!s1 || !set)
		return (NULL);
	cont = 0;
	i = ft_comp_i(s1, set);
	f = ft_comp_f(s1, set);
	if (f < i)
		return (ft_strdup(""));
	len_trim = f - i + 2;
	str_trim = (char *)malloc(sizeof(char) * len_trim);
	if (str_trim == NULL)
		return (NULL);
	while (i <= f)
	{
		str_trim[cont] = s1[i];
		cont++;
		i++;
	}
	str_trim[cont] = 0;
	return (str_trim);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main  (void)
{
  char  *str;
  char  *set;
  int index_i;
  int index_f;
  char *trim;
  
  str = "mi pequenito enferma";
  set = "maifer ";
  index_i = ft_comp_i(str, set);
  index_f = ft_comp_f(str, set);
  trim = ft_strtrim(str, set);
  printf("Trim inicio:%d\n", index_i);
  printf("Trim final:%d\n", index_f);
  printf("Trim string:%s\n", trim);	
  return (0);
}*/
