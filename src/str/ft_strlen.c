/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:06:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/04/23 22:25:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// La función strlen() toma una cadena como argumento y devuelve su longitud.
// El valor devuelto es de tipo size_t (el tipo entero sin signo).

//#include "libft.h"

#include "../../inc/libft.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

// int	main(void)
// {
// 	char str[] = "42Barcelona";
//
// 	printf("'%s' tiene %d caracteres\n", str, ft_strlen(str));
// }

// '42Barcelona' tiene 11 caracteres
