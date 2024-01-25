/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_v2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:55:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/05 17:23:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/colorsft.h"
#include "../inc/emoji.h"
#include <stdio.h>

int main(void)
{
	printf("=== Regular Colors === \n" RESET);
	printf(RED "Red\n" RESET);
	printf(GREEN "Green\n" RESET);
	printf(YELLOW "Yellow\n" RESET);
	printf(BLUE "Blue\n" RESET);
	printf(MAGENTA "Magenta\n" RESET);
	printf(CYAN "Cyan\n" RESET);
	printf(ORANGE "Orange\n" RESET);
	printf(WHITE "White\n" RESET);
	printf(BLACK "Black\n" RESET);

	printf("=== Bold === \n" RESET);
	printf(BRED "BRed\n" RESET);
	printf(BGREEN "BGreen\n" RESET);
	printf(BYELLOW "BYELLOW\n" RESET);
	printf(BBLUE "BBLUE\n" RESET);
	printf(BMAGENTA "BMAGENTA\n" RESET);
	printf(BCYAN "BCYAN\n" RESET);
	printf(BORANGE "BORANGE\n" RESET);
	printf(BWHITE "BWHITE\n" RESET);
	printf(BBLACK "BBLACK\n" RESET);

	printf("=== Italic === \n" RESET);
	printf(IRED "IRED\n" RESET);
	printf(IGREEN "IGREEN\n" RESET);
	printf(IYELLOW "IYELLOW\n" RESET);
	printf(IBLUE "IBLUE\n" RESET);
	printf(IMAGENTA "IMAGENTA\n" RESET);
	printf(ICYAN "ICYAN\n" RESET);
	printf(IORANGE "IORANGE\n" RESET);
	printf(IWHITE "IWHITE\n" RESET);

	printf("=== Underline === \n" RESET);
	printf(URED "URED\n" RESET);
	printf(UGREEN "UGREEN\n" RESET);
	printf(UYELLOW "UYELLOW\n" RESET);
	printf(UBLUE "UBLUE\n" RESET);
	printf(UMAGENTA "UMAGENTA\n" RESET);
	printf(UCYAN "UCYAN\n" RESET);
	printf(UORANGE "UORANGE\n" RESET);
	printf(UWHITE "UWHITE\n" RESET);

	printf("\x1B[43m\x1B[31mTexto rojo con fondo amarillo\x1B[0m\n");
	printf("\x1B[41m\x1B[37mTexto blanco con fondo rojo\x1B[0m\n");
	printf("\x1B[41m\x1B[1m\x1B[37mTexto blanco con fondo rojo y negrita\x1B[0m\n");
	printf("\x1B[42m\x1B[37mTexto blanco con fondo verde\x1B[0m\n");
	printf("\x1B[42m\x1B[94mTexto azul nebrita con fondo verde\x1B[0m\n");
	printf("\x1B[42m\x1B[1;30mTexto negro en negrita con fondo verde\x1B[0m\n");

	printf("\x1B[44m\x1B[33mTexto amarillo con fondo azul\x1B[0m\n");
	printf("\x1B[41m\x1B[33mTexto amarillo con fondo rojo\x1B[0m\n");

	printf("\x1B[5m\x1B[37mTexto blanco parpadeante\x1B[0m\n");
	printf("\x1B[1m\x1B[37mTexto blanco en negrita\x1B[0m\n");

	printf("\x1B[46m\x1B[1;97mTexto en negrita blanco con fondo cyan\x1B[0m\n");
	printf("\x1B[46m\x1B[1;30mTexto en negrita negro con fondo cyan\x1B[0m\n");
	printf("\x1B[44m\x1B[1;97mTexto en negrita blanco con fondo azul\x1B[0m\n");
    
    printf("\x1B[35m\x1B[48mTexto en negrita blanco con fondo azul\x1B[0m\n");

	printf("%s JAJA\n", JAJA);
	printf("%s SUDOR\n", SUDOR);
	printf("%s FORK\n", FORK);
	printf("%s PIZZA\n", PIZZA);
	printf("%s BURGUER\n", BURGUER);
	printf("%s SPLEEP\n", SPLEEP);
	printf("%s TERROR\n", TERROR);
	printf("%s DISH\n", DISH);

	// printf("=== Background === \n" RESET);
	// printf(On_Black "On_Black\n" RESET);
	// printf(On_Red "On_Red\n" RESET);
	// printf(On_Green "On_Green\n" RESET);
	// printf(On_Yellow "On_Yellow\n" RESET);
	// printf(On_Blue "On_Blue\n" RESET);
	// printf(On_Magenta "On_Magenta\n" RESET);
	// printf(On_Cyan "On_Cyan\n" RESET);
	// printf(On_White "On_White\n" RESET);
	// printf("=== High Intensity === \n" RESET);
	// printf(IBlack "IBlack\n" RESET);
	// printf(IRed "IRed\n" RESET);
	// printf(IGreen "IGreen\n" RESET);
	// printf(IYellow "IYellow\n" RESET);
	// printf(IBlue "IBlue\n" RESET);
	// printf(IMagenta "IMagenta\n" RESET);
	// printf(ICyan "ICyan\n" RESET);
	// printf(IWhite "IWhite\n" RESET);
	// printf("=== Bold High Intensity === \n" RESET);
	// printf(BIBlack "BIBlack\n" RESET);
	// printf(BIRed "BIRed\n" RESET);
	// printf(BIGreen "BIGreen\n" RESET);
	// printf(BIYellow "BIYellow\n" RESET);
	// printf(BIBlue "BIBlue\n" RESET);
	// printf(BIMagenta "BIMagenta\n" RESET);
	// printf(BICyan "BICyan\n" RESET);
	// printf(BIWhite "BIWhite\n" RESET);
	// printf("=== High Intensity backgrounds=== \n" RESET);
	// printf(On_Black "On_Black\n" RESET);
	// printf(On_Red "On_Red\n" RESET);
	// printf(On_Green "On_Green\n" RESET);
	// printf(On_Yellow "On_Yellow\n" RESET);
	// printf(On_Blue "On_Blue\n" RESET);
	// printf(On_Magenta "On_Magenta\n" RESET);
	// printf(On_Cyan "On_Cyan\n" RESET);
	// printf(On_White "On_White\n" RESET);
}
