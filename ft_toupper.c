/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:42:39 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 05:22:10 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int main (int argc, char *argv[])
{
	(void)argc;

	argv++;
	printf("caracter:%c\n", (*argv[0]));
	printf("ft      :%c\n", ft_toupper(*argv[0]));
	printf("original:%c\n", toupper(*argv[0]));
	return (0);
}*/
