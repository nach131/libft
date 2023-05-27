/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:45:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/27 13:21:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// se utiliza para dividir una cadena en una serie de tokens más pequeños.
// Permite separar una cadena en partes más pequeñas utilizando un
// delimitador específico.

// str: Puntero a la cadena de entrada que se va a dividir en tokens.
// La cadena debe ser modificable porque strtok realiza cambios en ella
// al reemplazar los delimitadores por caracteres nulos.

// delim: Puntero a una cadena que contiene los caracteres delimitadores.
//  Estos caracteres se utilizan para separar la cadena en tokens.

#include "libft.h"

char *ft_strtok(char *str, const char *delim)
{
	static char *next_token = NULL;

	if (str != NULL)
		next_token = str;
	else if (next_token == NULL)
		return NULL;

	char *token_start = next_token;
	char *token_end = ft_strpbrk(token_start, delim);

	if (token_end != NULL)
	{
		*token_end = '\0';
		next_token = token_end + 1;
	}
	else
		next_token = NULL;

	return token_start;
}

// int main(void)
// {
// 	// char str[] = "Hello,World,How,Are,You";
// 	char str[] = "env | grep PATH";
// 	// char str[] = "env VAR1=valor1 VAR2=valor2 comando";
// 	char *token;

// 	// Utilizar strtok para dividir la cadena en tokens utilizando la coma como delimitador
// 	token = ft_strtok(str, " ");

// 	while (token != NULL)
// 	{
// 		// Imprimir el token actual
// 		printf("%s\n", token);

// 		// Obtener el siguiente token
// 		token = ft_strtok(NULL, " ");
// 	}

// 	return 0;
// }
