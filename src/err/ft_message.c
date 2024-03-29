/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/11 12:11:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "colorsft.h"
#include "error.h"
#include "ft_printf.h"
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
		ft_printf(YELLOW "%s", msg);
	else if (err == INFO)
		ft_printf(CYAN "%s", msg);
	else if (err == SUCCESS)
		ft_printf(GREEN "%s", msg);
	ft_printf(WHITE "\n");
}
