/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:42:39 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/21 18:08:15 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((char *)b)[i] = (char) c;
		i++;
		len--;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	v[10]; 

	ft_memset(v, 42, 5);

	for (int i = 0; i < 10; ++i)	
		printf("%d\n", v[i]);
	printf("ft_memset-> %p\n\n", ft_memset(v, 42, 5));
	


	memset(v, 21, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("Real memset-> %p\n", memset(v, 21, 5));
}*/
