/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:26:58 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 19:47:39 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	if (content != NULL)
		free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list	*node;

	node = malloc(sizeof(t_list) * 1);
	if (!node)
		return (1);
	node->content = ft_strdup("yeyeyeyeye");
	node->next = NULL;
	printf("el contenido es %s\n", (char*)node->content);
	ft_lstdelone(node, &del);
	printf("el contenido es %s\n", (char*)node->content);
}*/