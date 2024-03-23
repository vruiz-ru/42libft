/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:36:35 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:24:46 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	a;

	a = 'U';
	printf("%c\n", a);
//	printf("%d\n", ft_isalpha(a));
//	printf("%d\n", isalpha(a));
    printf("%c\n", a);
	return (0);
}

int main()
{
	char a = 48 + ft_isalpha('2');
	write(1, &a, 1);
	a = 48 + isalpha('2');
	write(1, &a, 1);
}
*/
