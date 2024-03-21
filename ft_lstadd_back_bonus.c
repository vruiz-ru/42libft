/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:46:43 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/21 22:31:49 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = *lst;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
	}
}
/*
#include <stdio.h>
#include <unistd.h>

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
/*
int main()
{
    t_list *begin;
    char *p1 = "lorem";
    char *p2 = "ipsum";
    char *p3 = "dolor";
    char *p4 = "sit";

    t_list *nodo1;
    t_list *nodo2;
    t_list *nodo3;
    t_list *nodo4;

    begin = NULL;

    nodo1 = ft_lstnew(p1);
    nodo2 = ft_lstnew(p2);
    nodo3 = ft_lstnew(p3);
    nodo4 = ft_lstnew(p4);

    ft_lstadd_back(&begin, nodo1);
    ft_lstadd_back(&begin, nodo2);
    ft_lstadd_back(&begin, nodo3);
    ft_lstadd_back(&begin, nodo4);

    while (begin)
    {
        printf("%p\n",begin->content);
        printf("%s\n",((char *)begin->content));
        begin = begin->next;
    }

    //t_list *last;
    //last = ft_lstlast(nodo1);
    //printf("%d\n", *(int*)(last->content));
      free(nodo1);
     free(nodo2);
     free(nodo3);
    return 0;
}*/
