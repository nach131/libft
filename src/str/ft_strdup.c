/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:50:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/22 10:56:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//  función asigna memoria suficiente para una copia del string s1,
//   hace la copia y le devuelve un puntero.
//   el puntero posteriormente puede usarse como argumento de la función free
//   para liberar la memoria.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	if (!s1)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + 1) * sizeof(*s1));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	res[i] = '\0';
	return (res);
}
// int	main(void)
// {
// 	char	str[] ="42 Barcelona";
// 	char	*res = ft_strdup(str);
//
// 	printf("str original: %s, puntero: %p,%u\n", str, str);
// 	printf("res copiada: %s, puntero: %p,%u\n", res, res);
// }
//
// // str: 42 Barcelona, puntero: 0x7ffee6e4f950
// // res: 42 Barcelona, puntero: 0x7fef3d405790
