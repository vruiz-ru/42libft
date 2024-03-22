/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:03:42 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/22 19:19:54 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		return (dstsize + src_len);
	i = 0;
	while (dst_len + i < dstsize - 1 && src[i] != 0)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (src_len + dst_len);
}
/*
#include <string.h>

int main() 
{
	char dst[8] = "Hola, ";
	char src[20] = "Mundo!";
	size_t ret;

	printf("dst antes de llamar a strlcat: %s\n", dst);
	printf("Posición de memoria de dst antes de strlcat: %p\n", (void *)dst);
	ret = strlcat(dst, src, sizeof(dst));
	printf("Return value of strlcat: %zu\n", ret);
	printf("%s\n", dst);
	printf("Posición de memoria de dst después de strlcat: %p\n", (void *)dst);

	strcpy(dst, "Hola, "); // Reestablece dst a "Hola, "
	printf("dst antes de llamar a ft_strlcat: %s\n", dst);
	printf("Posición de memoria de dst antes de ft_strlcat: %p\n", (void *)dst);
	ret = ft_strlcat(dst, src, sizeof(dst)); // Usa src en lugar de src2
	printf("Return value of ft_strlcat: %zu\n", ret);
	printf("%s\n", dst);
	printf("Posición memoria de dst después de ft_strlcat: %p\n", (void *)dst);

	return 0;
}
*/
