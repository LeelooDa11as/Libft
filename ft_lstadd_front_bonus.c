/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:33:01 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 16:58:58 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = *lst;
		new->next = aux;
		*lst = new;
	}
}

/*
int main(void)
{
    t_list	*head = ft_lstnew("I am first, but will be secong");
    t_list	*node2 = ft_lstnew("I am the final node");

    head->next = node2;
    printf("List before adding a new node at the front:\n");
    t_list *current = head;
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
    printf("\nList after adding a new node at the front:\n");
    current = head;
	t_list *new_node = ft_lstnew("Now I will be the first node");
	ft_lstadd_front(&current, new_node);
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    t_list *temp;
    current = head;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}*/ 