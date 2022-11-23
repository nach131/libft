/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/23 20:51:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "colors.h"
#include "ft_printf.h"

void	ft_message(int err, char *msg)
{
	if (err == 0)
		ft_printf(RED"%s", msg);
	else if (err == 1)
		ft_printf(YELLOW"%s", msg);
	else if (err == 2)
		ft_printf(BLUE"%s", msg);
	else if (err == 3)
		ft_printf(GREEN"%s", msg);
	ft_printf(WHITE"\n");
}
