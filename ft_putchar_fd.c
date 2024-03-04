/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:10:05 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/04 20:32:29 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main (void)
{
	char 	c;
	int	fd;
	
	c = 'H';
	fd = open ( "prueba.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd == -1)
		printf("%s \n", " Error"); 
	ft_putchar_fd(c, fd); 
	return (0);
}*/
