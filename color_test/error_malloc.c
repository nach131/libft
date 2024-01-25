/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:48:12 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/09/20 23:53:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Definimos una función personalizada para malloc que simula una falla
void	*custom_malloc(size_t size)
{
	// Simulamos una falla devolviendo un puntero nulo
	return (NULL);
}

// Definimos una macro para cambiar malloc por custom_malloc
#define malloc(size) custom_malloc(size)

int	main(void)
{
	int	*ptr;

	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
	{
		printf("Malloc ha fallado.\n");
	}
	else
	{
		*ptr = 42;
		printf("Valor almacenado en el puntero: %d\n", *ptr);
		free(ptr); // Asegúrate de liberar la memoria asignada
	}
	return (0);
}
