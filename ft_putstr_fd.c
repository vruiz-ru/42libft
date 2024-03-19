/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:15:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 17:13:07 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main (void)
{
	char 	*s;
	int	fd;
	
	s = "Hello world";
	fd = open ( "prueba.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd == -1)
		printf("%s \n", " Error"); 
	ft_putstr_fd(s, fd); 
	return (0);
}*/
