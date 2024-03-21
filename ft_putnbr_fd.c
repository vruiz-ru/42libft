/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:24:56 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/21 18:09:52 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd != 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (n < 0)
			{
				n = n * -1;
				ft_putchar_fd('-', fd);
			}
			if (n > 9)
			{
				ft_putnbr_fd (n / 10, fd);
				n = n % 10;
			}
			ft_putchar_fd(n + '0', fd);
		}
	}
}
/*
void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
	free(str);
}
*/
/*
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
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
}*/
