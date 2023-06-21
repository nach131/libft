/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:31:28 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/06/21 20:09:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Imprime el contenido de un triple puntero ***arr

#include "ft_printf.h"
#include "libft.h"

void	ft_print_tptr(char ***arr)
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
			ft_printf("arr[%d][%d]: %s\n", i, j, arr[i][j]);
			j++;
		}
		i++;
	}
}
