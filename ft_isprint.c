/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:50:28 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:34:07 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	(void)argc;

	argv++;
	printf("char    :%c\n", **argv);
	printf("ft      :%d\n", ft_isprint(**argv));
	printf("original:%d\n", isprint(**argv));
	return (0);
}

#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isprint(2);
	write(1, &a, 1);
	a = 48 + isprint(2);
	write(1, &a, 1);
}*/
