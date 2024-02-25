/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:13:42 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/01/16 18:45:06 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
	if (*(unsigned char *)s1 != *(unsigned char *)s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	n--;
	s1++;
	s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s = argv[1];
	char	*s1 = argv[2];
	int		n = atoi(argv[3]);

	(void)argc;
	if (!ft_memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n\n\n", n);
	else 
		printf("The strings are different\n\n\n");

	if (!memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n", n);
	else 
		printf("The strings are different\n");

	
}
