/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:30:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 17:15:33 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
#include <stdio.h>
#include <string.h>
void mod (unsigned int i, char *c)
{
	*c = 'a' + i;
}

int main (void)
{
	char str[] = "Hola mundo";
	
	ft_striteri(str, mod);
	printf ("%s\n", str);
	return (0);
}*/
