/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/03/11 11:16:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "colors.h"
#include "ft_printf.h"
#include "error.h"
#include "libft.h"

void	ft_message(int err, char *msg)
{
	char	*str;

	if (err == DANGER)
	{
		str = ft_strjoin(RED, msg);
		write(STDERR_FILENO, str, ft_strlen(str));
		free(str);
	}
	else if (err == WARNING)
		ft_printf(YELLOW"%s", msg);
	else if (err == INFO)
		ft_printf(BLUE"%s", msg);
	else if (err == SUCCESS)
		ft_printf(GREEN"%s", msg);
	ft_printf(WHITE"\n");
}
