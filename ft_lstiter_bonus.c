/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:59:59 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 16:54:43 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst != 0)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void  f(void *lst)
{
    *(int*)lst = 0;
}

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
    
    ft_lstadd_front(nlist, nodo2);
    ft_lstadd_front(nlist, nodo3);
    while (n != 0)
    {
      printf("%p\n",n->content);
      printf("%d\n",*(int*)(n->content));
      n = n->next; 
    }
    n = nodo3;
    ft_lstiter(n, f);
    return 0;
}*/
