/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:53:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/25 13:55:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Para comprobar que str pasado es un numero positivo o negativo
// si es numero retirna 1

#include "libft.h"

int	ft_isnumber(const char *str)
{
	if (*str == '-')
		str++;
	else if (*str == '+')
		str++;
	if (ft_isdigit(*str))
		return (1);
	return (0);
}
