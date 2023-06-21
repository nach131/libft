/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:36:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/21 20:21:10 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Libera el contenido de un triple puntero char ***arr

#include "libft.h"

void	ft_free_tptr(char ***arr)
{
	int	i;
	int	j;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != NULL)
		{
			free(arr[i][j]);
			j++;
		}
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	***arr;

// 	arr = malloc(4 * sizeof(char **));
// 	arr[0] = malloc(3 * sizeof(char *));
// 	arr[1] = malloc(3 * sizeof(char *));
// 	arr[2] = malloc(3 * sizeof(char *));
// 	arr[0][0] = ft_strdup("42");
// 	arr[0][1] = ft_strdup("Barcelona");
// 	arr[0][2] = NULL;
// 	arr[1][0] = ft_strdup("42");
// 	arr[1][1] = ft_strdup("Madrid");
// 	arr[1][2] = NULL;
// 	arr[2][0] = ft_strdup("42");
// 	arr[2][1] = ft_strdup("Malaga");
// 	arr[2][2] = NULL;
// 	arr[3] = NULL;
// 	// Imprimir contenido antes de liberar
// 	printf("Contenido antes de liberar:\n");
// 	ft_print_tptr(arr);
// 	// Liberar memoria
// 	ft_free_tptr(arr);
// 	// Imprimir contenido después de liberar
// 	printf("Contenido después de liberar:\n");
// 	arr = NULL;
// 	ft_print_tptr(arr);
// 	// No se debe acceder a 'arr' después de liberar la memoria
// 	return (0);
// }
