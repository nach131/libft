/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 09:36:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/21 20:10:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// libera la memoria alocada en un doble puntero de char

#include "libft.h"

void	ft_free_dptr(char **arr)
{
	int	i;

	if (arr == NULL)
		return ;
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	**arr;

// 	arr = malloc(3 * sizeof(char *));
// 	arr[0] = ft_strdup("42");
// 	arr[1] = ft_strdup("Barcelona");
// 	arr[2] = ft_strdup("The best");
// 	// Imprimir contenido antes de liberar
// 	printf("Contenido antes de liberar:\n");
// 	ft_print_dptr(arr);
// 	// Liberar memoria
// 	ft_free_dptr(arr);
// 	// Imprimir contenido después de liberar
// 	printf("Contenido después de liberar:\n");
// 	ft_print_dptr(arr);
// 	// No se debe acceder a 'arr' después de liberar la memoria
// 	return (0);
// }

// 42
// Barcelona
// The best
// Contenido después de liberar:
