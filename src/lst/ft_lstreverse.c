/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/26 13:35:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// invierte el orden de los elementos de una lista

#include "libft.h"

void	ft_lstreverse(t_list *begin_list)
{
	int		list_size;
	t_list	*curr;
	t_list	tmp;

	list_size = ft_lstsize(begin_list);
	if (!begin_list || !begin_list->next)
		return ;
	while (list_size)
	{
		curr = begin_list;
		for (int i = 0; i < list_size - 1; i++)
		{
			tmp.content = curr->next->content;
			curr->next->content = curr->content;
			curr->content = tmp.content;
			curr = curr->next;
		}
		list_size--;
	}
}
