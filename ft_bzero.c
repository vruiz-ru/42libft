/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 01:02:25 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/04 15:10:00 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)s = '\0';
		s++;
		n--;
	}
}

/*int	main(void)
{
	int	v[20];

	for (int i = 0; i < 20; ++i)
		v[i] = 42;

	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
	puts("");

	ft_bzero(v, 9);
	
	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
}*/	
