/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:56:17 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 16:19:17 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list) * 1);
	if (!node)
		return ((t_list *) NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int main (void)
{
    t_list  *hey;
    void    *str = "hola que tal";

    hey = ft_lstnew(str);
    printf("%s\n", (char *)(hey->content));
    return (0);
}*/