/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:24:15 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:56:57 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return ((void *)(unsigned char *) s);
		s++;
		n--;
	}
	return (NULL);
}
/*
 *Esta función busca un carácter específico en los primeros 'n' bytes de la zona 
de memoria apuntada por 's'.


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char str[] = "Erase una vez...";
    const char str2[] = "Erase una vez...";
    const char ch = 'u';
    char *ret;

    ret = memchr(str, ch, strlen(str));
    printf("Con memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    ret = ft_memchr(str2, ch, strlen(str));
    printf("Con ft_memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    return 0;
}

int	main(int argc, char **argv)
{
	char	c;
	char	*s;
	int		n;
   
	(void) argc;
	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("%p\n\n", ft_memchr(s, c, n));
	printf("%p\n\n", memchr(s, c, n));
}*/
