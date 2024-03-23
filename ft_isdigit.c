/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:02:51 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 14:32:18 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isdigit('a');
	write(1, &a, 1);
	a = 48 + isdigit('a');
	write(1, &a, 1);
}
*/
