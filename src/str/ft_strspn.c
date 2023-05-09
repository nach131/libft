/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:35:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/09 11:37:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//  busca cuántos caracteres consecutivos de la cadena de entrada se
//  encuentran en el conjunto especificado.

// La función toma dos argumentos: un puntero a la cadena de entrada y un
// puntero a una cadena de caracteres que especifica el conjunto de caracteres
// permitidos. La función devuelve el número de caracteres consecutivos en
// la cadena de entrada que están presentes en el conjunto especificado.

#include "libft.h"

size_t	ft_strspn(const char *s, const char *accept)
{
	const char	*t_s;
	const char	*t_a;

	t_s = s;
	while (*t_s)
	{
		t_a = accept;
		while (1)
		{
			if (*t_s == *t_a)
				break ;
			else if (*t_a++ == '\0')
				return (t_s - s);
		}
		t_s++;
	}
	return (t_s - s);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "ABABC";
// 	char a[] = "ACB";

// 	printf("ori: %lu \n", strspn(s, a));
// 	printf("mio: %lu \n", ft_strspn(s, a));
// 	return(0);
// }
