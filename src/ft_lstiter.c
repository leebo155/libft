/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:12:51 by bohlee            #+#    #+#             */
/*   Updated: 2023/03/24 17:34:49 by bohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tail;

	if (lst == 0)
		return ;
	tail = lst;
	while (tail->next)
	{
		f(tail->content);
		tail = tail->next;
	}
	f(tail->content);
}
