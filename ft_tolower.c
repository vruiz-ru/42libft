/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:15:34 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/20 19:16:44 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_tolower('A');
	write(1, &a, 1);
	a = tolower('A');
	write(1, &a, 1);
}
*/
