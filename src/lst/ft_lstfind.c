/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:39:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/19 11:55:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Busca un valor en una lista, si le pasamos ft_strcmp son iguales ok
// si la lista son int hay que hacer una funcicion que reste los valores y el
// resultado es 0 son iguales

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, void *data_ref, int (*cmp)(char *, char *))
{
	t_list	*curr;

	curr = lst;
	while (curr)
	{
		if ((*cmp)(curr->content, data_ref) == 0)
			break ;
		curr = curr->next;
	}
	return (curr);
}
