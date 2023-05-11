/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuni.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:39:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/11 12:11:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "colorsft.h"
#include "ft_printf.h"

void	ft_putuni(int n, char *str, char *color)
{
	int	i;

	i = 0;
	ft_printf(color);
	while (i < n)
	{
		ft_printf("%s", str);
		i++;
	}
	ft_printf(WHITE "\n");
}

// int main()
// {
// 	ft_putuni(24, DHOR, YELLOW);
// 	ft_putuni(24, LSHADE, RED);
// 	ft_putuni(24, FBLOCK, ORANGE);
// 	ft_putuni(24, EBLOCK, GREEN);
// 	ft_putuni(24, FLECHAD, CYAN);
// }

// ════════════════════════
// ░░░░░░░░░░░░░░░░░░░░░░░░
// ████████████████████████
// ▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍▍
// ⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑⤑
