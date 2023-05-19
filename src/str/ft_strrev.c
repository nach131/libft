/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:32:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/19 12:21:38 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// invierte la cadena de caracteres dada como entrada. Es decir,
// cambia el orden de los caracteres de la cadena original para que el último
// carácter de la cadena original se convierta en el primer carácter
//  de la cadena
// invertida y el primer carácter de la cadena original se convierta en
// el último carácter de la cadena invertida. La función no devuelve nada,
// ya que modifica directamente la cadena de entrada.

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = 0;
	i = 0;
	tmp = 0;
	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "Hello World";
// 	ft_strrev(s);
// 	printf("%s\n", s);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*s;

// 	s = malloc(14 * sizeof(char));
// 	s = ft_strdup("42 Barcelona");
// 	ft_strrev(s);
// 	ft_printf("%s\n", s);
// 	return (0);
// }
