/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:53:03 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/19 17:08:44 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while ((*lst) != 0)
		{
			temp = (*lst)->next;
			del(*lst);
			*lst = temp;
		}
	}
}
/*
void del    (void *lst)
{
    free(lst);
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
    ft_lstclear(nlist, del);
    
    return 0;
}*/
