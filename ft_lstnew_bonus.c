/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:32 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 17:24:06 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (nodo == NULL)
		return (NULL);
	nodo->content = content;
	nodo->next = 0;
	return (nodo);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	i;
	int *p;
	t_list	*lista;

	i = 12;
	p = &i;
	lista = ft_lstnew(p);
	free(lista);
	return 0;
}*/
