/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:51:56 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 20:04:46 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*temp;

	aux = *lst;
	while (aux != NULL)
	{
		temp = aux;
		del(temp->content);
		aux = aux->next;
		free(temp);
	}
	*lst = NULL;
}
