/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:17:14 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/20 19:18:15 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_toupper('b');
	write(1, &a, 1);
	a = toupper('b');
	write(1, &a, 1);
}*/
