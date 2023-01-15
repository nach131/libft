/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:40:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/01/15 16:50:49 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../inc/colors.h"
#include "../inc/ft_printf.h"

int	main(void)
{
	ft_printf(UWHITE "Regular Colors\n");
	ft_printf(RED "This is RED\n");
	ft_printf(GREEN "This is GREEN\n");
	ft_printf(YELLOW "This is YELLOW\n");
	ft_printf(BLUE "This is BLUE\n");
	ft_printf(MAGENTA "This is MAGENTA\n");
	ft_printf(CYAN "This is CYAN\n");
	ft_printf(WHITE "This is WHITE\n");
	ft_printf(ORANGE "This is ORANGE\n" WHITE);

	ft_printf(UWHITE "\nBold Colors\n");
	ft_printf(BBLACK "This is BBLACK\n" WHITE);
	ft_printf(BYELLOW "This is YELLOW\n");
	ft_printf(BBLUE "This is BLUE\n");
	ft_printf(BMAGENTA "This is MAGENTA\n");
	ft_printf(BCYAN "This is CYAN\n");
	ft_printf(BORANGE "This is BORANGE\n");
	ft_printf(BWHITE "This is WHITE\n");

	ft_printf(UWHITE "\nUnderline Colors\n");
	ft_printf(UYELLOW "This is YELLOW\n");
	ft_printf(UBLUE "This is BLUE\n");
	ft_printf(UMAGENTA "This is MAGENTA\n");
	ft_printf(UCYAN "This is CYAN\n");
	ft_printf(UORANGE "This is UORANGE\n");
	ft_printf(UWHITE "This is WHITE\n");

	ft_printf(UWHITE "\nBackground Colors\n");
	ft_printf(RED BGYELLOW "This is RED BGYELLOW\n" BGBLACK);
	ft_printf(BWHITE BGRED "This is BWHITE BGRED\n" BGBLACK);
	ft_printf(BBLACK BGGREEN "This is BBLACK BGGREEN \n" BGBLACK);
	ft_printf(BORANGE BGBLUE "This is BORANGE BGBLUE  \n" BGBLACK);
	ft_printf(BYELLOW BGBLUE "This is BYELLOW BGBLUE  \n" BGBLACK);
	ft_printf(BGRED BYELLOW "This is BGRED BYELLOW\n" BGBLACK);
	ft_printf(BGBLACK WHITE "---------------------\n");
}
