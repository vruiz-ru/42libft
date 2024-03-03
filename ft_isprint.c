/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:50:28 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/01 03:21:08 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;

	argv++;
	printf("char    :%c\n", **argv);
	printf("ft      :%d\n", ft_isprint(**argv));
	printf("original:%d\n", isprint(**argv));
	return (0);
}*/
