/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:44:37 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 15:13:45 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
		write (fd, "\n", 1);
	}
}
/*
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main (void)
{
	char	*s;
	int	fd;

	s = "prueba putendl";
	fd = open ( "prueba.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd == -1)
		printf("%s \n", " Error");
	ft_putendl_fd(s, fd);
	return (0);
}*/
