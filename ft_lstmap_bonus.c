/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:43:49 by vruiz-ru          #+#    #+#             */
/*   Updated: 2024/03/22 18:07:26 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*newcontent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (newnode == NULL)
		{
			del(newcontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
/*
int main()
{
    t_list *list = NULL;
    int *num1 = malloc(sizeof(int));
    *num1 = 42;
    int *num2 = malloc(sizeof(int));
    *num2 = 43;

    t_list *node1 = ft_lstnew(num1);
    if (node1 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        return (1);
    }

    ft_lstadd_back(&list, node1);

    t_list *node2 = ft_lstnew(num2);
    if (node2 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        free(node1);
        return (1);
    }

    ft_lstadd_back(&list, node2);

    t_list *new_list = ft_lstmap(list, increment, del);

    if (*(int *)new_list->content != 43 || *(int *)new_list->next->content != 44)
    {
        printf("Error: La función no se aplicó correctamente \n");
        free(node1);
        free(node2);
        return (1);
    }

    printf("La función se aplicó correctamente \n");

    free(node1);
    free(node2);

    return (0);
}*/
