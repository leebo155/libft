/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bohlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:18:42 by bohlee            #+#    #+#             */
/*   Updated: 2024/04/22 11:35:09 by bohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	t_list	*tail;
	size_t	size;

	size = 0;
	if (lst == 0)
		return (size);
	else
		size++;
	tail = lst;
	while (tail->next)
	{
		size++;
		tail = tail->next;
	}
	return (size);
}
