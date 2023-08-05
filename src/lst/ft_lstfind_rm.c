/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_rm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:57:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/08/05 18:12:17 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Busca el string pasado en todo los nodos de la lista, si lo encuentra
// borra el nodo y actualiza la lista.

#include "libft.h"

void	ft_lstfind_rm(t_list **head, const char *str)
{
	t_list	*current;
	t_list	*prev;

	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		if (ft_strcmp(current->content, (char *)str) == 0)
		{
			if (prev != NULL)
				prev->next = current->next;
			else
				*head = current->next;
			free(current->content);
			free(current);
			current = NULL;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

// int main(void)
// {
// 	t_list *lst = malloc(1 * sizeof(t_list));
// 	lst->next = malloc(1 * sizeof(t_list));
// 	lst->next->next = malloc(1 * sizeof(t_list));
// 	lst->next->next->next = malloc(1 * sizeof(t_list));
// 	lst->next->next->next->next = malloc(1 * sizeof(t_list));
// 	lst->next->next->next->next->next = malloc(1 * sizeof(t_list));
// 	lst->next->next->next->next->next->next = NULL;
// 	lst->content = strdup("USER=nacho");
// 	lst->next->content = strdup("LANG=es_ES.UTF-8");
// 	lst->next->next->content = strdup("HOME=/Users/nacho");
// 	lst->next->next->next->content = strdup("USER=nacho");
// 	lst->next->next->next->next->content = strdup("SHELL=/bin/bash");
// 	lst->next->next->next->next->next->content = strdup("CLICOLOR=1");

// 	printf("Original list:\n");
// 	ft_lstprint(lst);

// 	const char *str_to_remove = "USER=nacho";
// 	ft_lstfind_rm(&lst, str_to_remove);

// 	printf("\nList after removing '%s':\n", str_to_remove);
// 	ft_lstprint(lst);
// }

// Original list:
// USER=nacho
// LANG=es_ES.UTF-8
// HOME=/Users/nacho
// USER=nacho
// SHELL=/bin/bash
// CLICOLOR=1

// List after removing 'USER=nacho':
// LANG=es_ES.UTF-8
// HOME=/Users/nacho
// USER=nacho
// SHELL=/bin/bash
// CLICOLOR=1
