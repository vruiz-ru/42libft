/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:24:56 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/05 20:28:15 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
}

int main (void)
{
	int	num;
	int	fd;

	num = 123456789;
	fd = open ( "prueba.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd == -1)
		printf("%s \n", " Error");
	ft_putnbr_fd(num, fd);
	return (0);
}
