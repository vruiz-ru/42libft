/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:09:23 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/15 16:19:46 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
void del	(void *lst)
{
	free(lst);
}

int main()
{
    int *p1;   
    t_list *nodo1;

    p1 = malloc(sizeof(int));
    *p1 = 48;

    nodo1 = ft_lstnew(p1);
    ft_lstdelone(nodo1 , del);
 
    return 0;
}*/
