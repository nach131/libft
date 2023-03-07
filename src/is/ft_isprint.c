/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:33:55 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/07 16:52:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= '!' && c <= '~')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int c;
// 	printf("Escribe un numero de caracter para comprobar si es imprimible\n");
// 	scanf("%d", &c);
// 	printf("el caracter '%c': %d\n", (char)c, ft_isprint(c));
// }
