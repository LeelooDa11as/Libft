/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:51:00 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 19:54:56 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flst;
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst)
		return (lst);
	flst = NULL;
	while (lst)
	{
		tmp2 = f(lst->content);
		tmp = ft_lstnew(tmp2);
		if (!(tmp))
		{
			del(tmp2);
			ft_lstclear(&flst, del);
			return (0);
		}
		ft_lstadd_back(&flst, tmp);
		lst = lst->next;
	}
	return (flst);
}
