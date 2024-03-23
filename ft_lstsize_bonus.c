/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:08:01 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/23 17:24:50 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
    
    ft_lstadd_front(nlist, nodo2);
    ft_lstadd_front(nlist, nodo3);
    
    int u;
    
    u = ft_lstsize(nodo3);
    printf("%d\n", u);
    free(nodo1);
    free(nodo2);
    free(nodo3);
    return 0;
}*/
