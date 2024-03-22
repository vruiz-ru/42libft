/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:52:21 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/22 20:11:08 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int	num;
	int	isneg;
	int	i;

	num = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * isneg);
}

/*
static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || 32 == c)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		nb;

	nb = 0;
	sign = 1;
	if (NULL == str)
		return (0);
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
		if ((*str++) == '-')
			sign = -1;
	while (*str >= 48 && *str <= 57)
		nb = (10 * nb) + ((*str++) - 48);
	return (nb * sign);
}
*/
/*
int	main(void)
{
	char	*s;
	char	*s1;

	s1 = "    ++  2413";
	s = "     ++  2413";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
}
*/
