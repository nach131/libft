/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:29:25 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/09 11:31:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// busca el primer carácter de la primera cadena que aparece en la segunda
// cadena y devuelve un puntero a la posición de ese carácter en la segunda cadena.

// La función toma dos argumentos: un puntero a la cadena en la que se busca
// y un puntero a la cadena que se utiliza como conjunto de caracteres a buscar
// en la cadena de entrada. La función devuelve un puntero al primer carácter
// encontrado en la cadena de entrada, o NULL si no se encuentra ninguno de los
// caracteres en la cadena de entrada.

#include "libft.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	while (s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char s[] = "AADff";
// 	const char c[] = "dfASiCd";

// 	printf("ori: %s\n", strpbrk(s, c));
// 	printf("mio: %s\n", ft_strpbrk(s, c));
// }
