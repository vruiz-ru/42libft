/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:22:51 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:22:18 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main()
{
	char a = 48 + ft_isalnum('.');
	write(1, &a, 1);
	a = 48 + isalnum('.');
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;

	argv++;
	printf("char    :%c\n", **argv);
	printf("ft      :%d\n", ft_isalnum(**argv));
	printf("original:%d\n", isalnum(**argv));
	return (0);
}*/
