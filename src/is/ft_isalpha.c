/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:09:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/08 11:41:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii: 65-A to 90-Z; 97-a to 122-z

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char n;
// 	int res;
// 	printf("Escribe un caracter para comprobar si es Alfabeto: \n");
// 	scanf("%c", &n);
// 	res = ft_isalpha(n);
// 	printf("Resultado: %d\n",res);
// }
