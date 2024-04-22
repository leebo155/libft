/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:16:39 by bohlee            #+#    #+#             */
/*   Updated: 2023/03/25 15:06:50 by bohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfree(t_list *chk_lst, t_list **lst, void *ctt, void (*del)(void *))
{
	if (chk_lst)
		return (0);
	del(ctt);
	if (*lst)
		ft_lstclear(lst, del);
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp_list;
	t_list	*new_head;
	t_list	*old_list;
	void	*contents;

	if (lst == 0)
		return (0);
	old_list = lst->next;
	contents = f(lst->content);
	new_list = ft_lstnew(contents);
	if (ft_lstfree(new_list, &new_list, contents, del))
		return (new_list);
	new_head = new_list;
	while (old_list)
	{
		contents = f(old_list->content);
		tmp_list = ft_lstnew(contents);
		if (ft_lstfree(tmp_list, &new_head, contents, del))
			return (new_head);
		new_list->next = tmp_list;
		old_list = old_list->next;
		new_list = new_list->next;
	}
	return (new_head);
}
