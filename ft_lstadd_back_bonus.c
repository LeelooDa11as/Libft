/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:10:40 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 20:05:57 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
		(*lst) = new;
	else
		(ft_lstlast(*lst)->next = new);
}

/*
int main(void)
{
	t_list	*node1 = ft_lstnew("I am first");
    t_list	*node2 = ft_lstnew("I am second");
    t_list	*node3 = ft_lstnew("I am the final node");

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
  
	// In case of NULL list
	//t_list	*noll = NULL;
    //ft_lstadd_front(&noll, new_node);
	//current = noll;
	//printf("if the list in NULL\n");
	//while (current != NULL)
    //{
        //printf("%s\n", (char *)current->content);
        //current = current->next;
    //}
    printf("\n AFTER LSTADD_BACK: \n");
    current = node1;
	t_list *new_node = ft_lstnew("New last :D");
	ft_lstadd_back(&current, new_node);
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
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