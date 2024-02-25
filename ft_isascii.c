/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:36:38 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/01/11 20:50:11 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= '\0' && c <= 127) 
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;

	argv++;
	printf("char    :%c\n", **argv);
	printf("ft      :%d\n", ft_isascii(**argv));
	printf("original:%d\n", isascii(**argv));
	return (0);
}
