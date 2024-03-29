/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:42:28 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/30 15:52:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void	ft_write(char c, t_print *tp)
{
	if (!tp->error)
	{	
		if (write(1, &c, 1) == -1)
		{
			tp->error = 1;
			tp->len = -1;
		}
		else
			tp->len += 1;
	}
}
