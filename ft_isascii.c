/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:36:38 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:27:38 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= '\0' && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;

	argv++;
	printf("char    :%c\n", **argv);
	printf("ft      :%d\n", ft_isascii(**argv));
	printf("original:%d\n", isascii(**argv));
	return (0);
}
int main()
{
	char a = 48 + ft_isascii(128);
	write(1, &a, 1);
	a = 48 + isascii(128);
	write(1, &a, 1);
}
*/
