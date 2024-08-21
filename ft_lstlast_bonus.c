/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:42:09 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 20:01:45 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (lst);
	}
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list 	*node1 = ft_lstnew("I am the first node");
	t_list	*node2 = ft_lstnew("I am second node");
    t_list	*node3 = ft_lstnew("I am the final node");
	t_list	*res;

    node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
    printf("List before adding a new node at the front:\n");
    t_list *current = node1;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
	current = node1;
	res = ft_lstlast(node1);
	printf("el ultimo nodo es: %s\n", (char *)res->content);

    t_list *temp;
    current = node1;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}*/