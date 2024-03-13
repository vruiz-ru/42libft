/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:07:46 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/13 20:35:51 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
  void            *content;
  struct  s_list  *next;
}                 t_list;

t_list    *ft_lstnew(void *content)
{
    t_list    *nodo;

    nodo = malloc(sizeof(t_list));
    if (nodo == NULL)
        return (NULL);
    nodo->content = content;
    nodo->next = 0;
    return (nodo);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

int main()
{
    int    i;
    int *p;
    t_list *new;
    t_list *l;
    t_list *uno;
    t_list *dos;
    
    
    i = 48;
    p = &i;
    l = ft_lstnew(p);
    new = malloc(sizeof(t_list));
    uno = malloc(sizeof(t_list));
    dos = malloc(sizeof(t_list));
    new->content = p;
    new->next = NULL;
    uno->content = p;
    dos->content = p;
    ft_lstadd_front(&l, uno);
    ft_lstadd_front(&l, dos);
    return 0;
}
