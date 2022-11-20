/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:05:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/13 01:40:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii 48-0 to 57-9

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char n;
// 	printf("Escribe un caracter para comprobar si es digito:\n");
// 	scanf("%c", &n);
// 	printf("Resultado de '%c' es: %d\n",n,ft_isdigit(n));;
// }
