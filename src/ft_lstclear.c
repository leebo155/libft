/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:56:08 by bohlee            #+#    #+#             */
/*   Updated: 2023/03/24 17:32:21 by bohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tail;
	t_list	*old_tail;

	if (*lst == 0)
		return ;
	tail = *lst;
	*lst = 0;
	while (tail->next)
	{
		del(tail->content);
		old_tail = tail;
		tail = tail->next;
		free(old_tail);
	}
	del(tail->content);
	free(tail);
}
