/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/10 00:41:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "colors.h"
#include "libft.h"

void	ft_message(int err, char *msg)
{
	if (err == 0)
	{
		ft_putstr_fd(RED"", 1);
		ft_putstr_fd(msg, 1);
	}
	else if (err == 1)
	{
		ft_putstr_fd(YELLOW"", 1);
		ft_putstr_fd(msg, 1);
	}
	else if (err == 2)
	{
		ft_putstr_fd(BLUE"", 1);
		ft_putstr_fd(msg, 1);
	}
	else if (err == 3)
	{
		ft_putstr_fd(GREEN"", 1);
		ft_putstr_fd(msg, 1);
	}
	ft_putstr_fd(WHITE"\n", 1);
}
