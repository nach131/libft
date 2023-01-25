/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:10:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/01/25 19:38:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Devuelve 1 si el numero pasado por argumento es primo y 0 si no lo es

#include "libft.h"

int	ft_isprime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % 2 == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include "../../inc/ft_printf.h"

// int main(int n, char **str)
// {
// 	if (n == 2 && (str[1][0] > '0' && str[1][0] < '9'))
// 	{
// 		int num = atoi(str[1]);
// 		int i = 0;

// 		while (i < num)
// 		{
// 			if (ft_isprime(i) == 1)
// 				ft_printf("%d ", i);
// 			i++;
// 		}
// 	}
// 	else
// 		write(1, "Escribe numero\n", 15);
// 	return (0);
// }
