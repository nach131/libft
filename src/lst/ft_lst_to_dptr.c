/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_dptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:09:36 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/10 13:36:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "enum.h"
#include "libft.h"

// Pasa todos los elementos de una lista a un char **res, si del es ON,
// borra cada elemento de la lista y libera la memoria.

char	**ft_lst_to_dptr(t_list **lst, int del)
{
	int		i;
	int		num_lst;
	char	**res;
	t_list	*temp;

	i = 0;
	num_lst = ft_lstsize(*lst);
	res = malloc((num_lst + 1) * sizeof(char *));
	while (*lst)
	{
		res[i] = ft_strdup((*lst)->content);
		i++;
		if (del == ON)
		{
			temp = *lst;
			*lst = (*lst)->next;
			free(temp->content);
			free(temp);
		}
		else if (del == OFF)
			*lst = (*lst)->next;
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	int		num;
// 	char	**array;
// 	int		i;

// 	lst = ft_lstnew("UNO=uno");
// 	lst->next = ft_lstnew("DOS=dos");
// 	lst->next->next = ft_lstnew("TRES=tres");
// 	num = ft_lstsize(lst);
// 	printf("elementos lst: %d\n", num);
// 	ft_lstprint(lst);
// 	array = ft_lst_to_dptr(&lst, ON);
// 	i = 0;
// 	i = 0;
// 	printf("----array----\n");
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// 	ft_free_dptr(array);
// 	// ft_lstfree(lst);
// 	return (0);
// }
