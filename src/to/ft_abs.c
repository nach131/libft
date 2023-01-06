/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:50:55 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/01/07 00:03:49 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// The ft_abs() function computes the absolute value of the integer i
// cambia el signo negativo del numero (i) devuelve el numero en positivo

#include "libft.h"

int ft_abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}

// int main(void)
// {
// 	int ng = -42;

// 	printf("Original: %d\nabs: %d\n", ng, abs(ng));
// 	printf("Original: %d\nft_abs: %d\n", ng, abs(ng));
// }
