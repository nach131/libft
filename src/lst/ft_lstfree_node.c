/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:59:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/23 14:06:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Libera el contenido de cada node de la lista y el nodo
// dejando la lista para incurporar nuevos elementos

#include "libft.h"

void	ft_lstfree_node(t_list **lst)
{
	t_list	*cur;
	t_list	*tmp;

	cur = *lst;
	while (cur != NULL)
	{
		tmp = cur->next;
		free(cur->content);
		free(cur);
		cur = tmp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*list;

// 	list = (t_list *)malloc(sizeof(t_list));
// 	list->content = ft_strdup("42 Barcelona");
// 	list->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->content = ft_strdup("42 Madrid");
// 	list->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->content = ft_strdup("42 Malaga");
// 	list->next->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->next->content = ft_strdup("42 Paris");
// 	list->next->next->next->next = NULL;
// 	ft_lstprint(list);
// 	ft_lstfree_node(&list);
// 	printf("Ahora asignado otros valores\n");
// 	list = (t_list *)malloc(sizeof(t_list));
// 	list->content = ft_strdup("42 Tokio");
// 	list->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->content = ft_strdup("42 Moon");
// 	list->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->content = ft_strdup("42 Marts");
// 	list->next->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->next->content = ft_strdup("42 New York");
// 	list->next->next->next->next = NULL;
// 	ft_lstprint(list);
// 	return (0);
// }
