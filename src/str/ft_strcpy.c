/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:36:30 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/26 11:45:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Copia una cadena de caracteres  desde una ubicación de memoria de origen a
// una ubicación de memoria de destino. La función tiene la siguiente firma:

// dest(s1): Es un puntero al destino donde se copiará la cadena de origen.
//  Es importante asegurarse de que haya suficiente espacio en la memoria
//  apuntada por dest para contener la cadena copiada,
//  incluido el carácter nulo al final.
// src(s2): Es un puntero a la cadena de origen que se copiará.
// 	Esta cadena debe ser una cadena válida y
// 	debe terminar con el carácter nulo ('\0').

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2++[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//   char dst[] = "42 Barcelona";
//   char str[] = "copiar";
//   printf("dst: %s, str: %s\n", dst, str);
//   ft_strcpy(dst, str);
//   printf("dst: %s, str: %s\n", dst, str);
// }

// $dst: 42 Barcelona, str: copiar
// $dst: copiar, str: copiar
