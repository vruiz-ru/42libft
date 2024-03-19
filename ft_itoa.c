/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:52:27 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 20:57:41 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lint(int n)
{
	int	l;

	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		n = n * (-1);
		l = 1;
	}
	else
		l = 0;
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = lint(n);
	str = ft_calloc((l + 1), sizeof(char));
	if (str == 0)
		return (NULL);
	if (n >= 0)
		n = n * -1;
	else
		str[0] = '-';
	while ((l > 0 && str[0] == '\0') || (l > 1 && str[0] == '-'))
	{
		str[l - 1] = ((n % 10) * -1 + '0');
		n = n / 10;
		l--;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int		n;
	char	*str;

	n = -123456789;
	str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
}*/
/* OP2 +25lines
char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	l = lint(n);
	str = (char *)malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	str[l] = '\0';
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
		while (--l >= 1)
		{
			str[l] = n % 10 + '0';
			n = n / 10;
		}
		return (str);
	}
	while (--l >= 0)
	{
		str[l] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}*/
