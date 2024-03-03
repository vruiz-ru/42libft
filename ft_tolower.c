/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:48:38 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 05:42:38 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main (int argc, char *argv[])
{
	(void)argc;

	argv++;
	printf("caracter:%c\n", (*argv[0]));
	printf("ft      :%c\n", ft_tolower(*argv[0]));
	printf("original:%c\n", tolower(*argv[0]));
	return (0);
}*/	
