/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/27 14:49:29 by nmota-bu         ###   ########.fr       */
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
	int		i;

	list_size = ft_lstsize(begin_list);
	if (!begin_list || !begin_list->next)
		return ;
	while (list_size)
	{
		curr = begin_list;
		i = 0;
		while (i < list_size - 1)
		{
			tmp.content = curr->next->content;
			curr->next->content = curr->content;
			curr->content = tmp.content;
			curr = curr->next;
			i++;
		}
		list_size--;
	}
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*curr;

// 	list = (t_list *)malloc(sizeof(t_list));
// 	list->content = "A";
// 	list->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->content = "B";
// 	list->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->content = "C";
// 	list->next->next->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->next->next->content = "D";
// 	list->next->next->next->next = NULL;
// 	printf("Original list: ");
// 	curr = list;
// 	while (curr != NULL)
// 	{
// 		printf("%s ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("\n");
// 	ft_lstreverse(list);
// 	printf("Reversed list: ");
// 	curr = list;
// 	while (curr != NULL)
// 	{
// 		printf("%s ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("\n");
// 	return (0);
// }

// Original list: A B C D
// Reversed list: D C B A
