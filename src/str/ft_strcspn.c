/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:24:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/19 12:19:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// busca el primer carácter de la segunda cadena que aparece en la primera
// cadena y devuelve la posición del carácter en la cadena de entrada.
// Si la cadena de entrada no contiene ninguno de los caracteres de
// la segunda cadena, devuelve la longitud completa de la cadena de entrada.

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (reject[i])
	{
		while (s[j])
		{
			if (s[j] == reject[i])
				return (j);
			j++;
		}
		i++;
	}
	return (j);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "42 Barcelona";
// 	char rej[] = "n";

// printf("posicion: %zu\n", strcspn(s, rej));
// printf("posicion: %zu\n", ft_strcspn(s, rej));

// 	return (0);
// }

// posicion: 10
// posicion: 10
