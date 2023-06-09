/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 23:15:25 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/08 16:33:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Libera todos los nodos de una lista pasada por parametro

#include "libft.h"

void	ft_lstfree(t_list *lst)
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp->content)
		{
			free(tmp->content);
			tmp->content = NULL;
		}
		free(tmp);
	}
}

// void print_lst(t_list *lst)
// {
// 	if (lst)
// 	{
// 		while (lst != NULL)
// 		{
// 			printf("%s\n", lst->content);
// 			lst = lst->next;
// 		}
// 	}
// }

// int main(void)
// {
// 	t_list *list;

// 	list = (t_list *)malloc(sizeof(t_list));
// 	list->content = ft_strdup("42 Barcelona");
// 	list->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->content = ft_strdup("42 Madrid");
// 	list->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->content = ft_strdup("42 Malaga");
// 	list->next->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->next->content = ft_strdup("42 Paris");
// 	list->next->next->next->next = NULL;
// 	print_lst(list);
// 	ft_lstfree(list);
// 	return (0);
// }
