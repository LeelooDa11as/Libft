/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:48:01 by kkoval            #+#    #+#             */
/*   Updated: 2024/08/21 19:57:36 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;

	i = 0;
	len = (int) ft_strlen(s);
	while (i < len)
	{
		write(fd, s + i, 1);
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	*s = "Nina";
	int		fd;

	fd = 1;
	ft_putstr_fd(s, fd);
	return (1);
}*/
