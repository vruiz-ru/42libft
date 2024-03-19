/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:46:43 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/14 21:01:53 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		while ((*lst)->next != NULL)
			*lst = (*lst)->next;
		new->next = NULL;
		(*lst)->next = new;
	}
}
/*
int main()
{

    int i;
    int *p1;
    int j;
    int *p2;
    int k;
    int *p3;
    t_list *nodo1;
    t_list *nodo2;
    t_list *nodo3;
    t_list *n;
    t_list **nlist;

    i = 48;
    p1 = &i;
    j = 8;
    p2 = &j;
    k = 4;
    p3 = &k;

    nodo1 = ft_lstnew(p1);
    n = nodo1;
    nlist = &n;

    nodo2 = ft_lstnew(p2);
    nodo3 = ft_lstnew(p3);

    ft_lstadd_back(nlist, nodo2);
    ft_lstadd_back(nlist, nodo3);
    n = nodo1;
    while (n != 0)
    {
      printf("%p\n",n->content);
      printf("%d\n",*(int*)(n->content));
      n = n->next;
    }

    free(nodo1);
    free(nodo2);
    free(nodo3);
    return 0;
}*/
