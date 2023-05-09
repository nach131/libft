/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:25:30 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/09 10:32:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// La función strcmp() en C se utiliza para comparar dos cadenas de caracteres.
// La función devuelve un valor entero que indica si las cadenas son iguales o no.

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {

// 	char s[] = "ABABC";
// 	char a[] = "ACB";

// 	printf("mio: %d\n", ft_strcmp(a,b));
// 	printf("original: %d\n", strcmp(a,b));

// }
