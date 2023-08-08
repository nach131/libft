/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:27:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/08/08 13:31:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Es como ft_strdup, pero con integer

#include "libft.h"

int	*ft_numdup(int num)
{
	int	*res;

	res = malloc(sizeof(int));
	if (res != NULL)
		*res = num;
	return (res);
}

// void print_num(int **arr)
// {
// 	int i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("Valor en redir[%d]: %d\n", i, *arr[i]);
// 		free(arr[i]); // Liberar la memoria asignada en ft_numdup
// 		i++;
// 	}
// 	free(arr); // Liberar el arreglo de punteros al final
// }

// int main(void)
// {
// 	int **redir;

// 	redir = calloc(5, sizeof(int *));
// 	redir[3] = NULL;					// P utiliza NULL en lugar de 0
// 	redir[0] = ft_numdup(1);
// 	redir[1] = ft_numdup(1);
// 	redir[2] = ft_numdup(5); // Asignar el valor D_REDIR_OUT al puntero
// 	print_num(redir);
// 	return (0);
// }
