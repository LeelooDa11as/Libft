/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:29:19 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 16:32:21 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
int	main (void)
{
	void	*str1 = "First node";
	void	*str2 = "Second node";
	void	*str3 = "Third node";
	int		res;

    t_list	*node1 = ft_lstnew(str1);
    t_list	*node2 = ft_lstnew(str2);
    t_list	*node3 = ft_lstnew(str3);

    node1->next = node2;
    node2->next = node3;

    t_list	*current = NULL;
	res = ft_lstsize(current);
	printf("list len is %d\n", res);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
