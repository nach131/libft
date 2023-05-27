/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:25:30 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/05/27 14:31:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// La función strcmp() en C se utiliza para comparar dos cadenas de caracteres.
// La función devuelve un valor entero que indica si las cadenas
// son iguales o no. si son iguales devuelve 0

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[] = "hola";
// 	char s2[] = "hola";
// 	printf("valor: %d\n", ft_strcmp(s1, s2));
// 	return (0);
// }

// valor: 0

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char cadena[] = "env | grep PATH";
// 	char subcadena[] = "|";
// 	// char cadena[] = "La casa es grande";
// 	// char subcadena[] = "casa";

// 	if (strstr(cadena, subcadena) != NULL)
// 		printf("La subcadena se encuentra en la cadena.\n");
// 	else
// 		printf("La subcadena no se encuentra en la cadena.\n");

// 	return (0);
// }
//=======================Ordena Alfabeticamente========================
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char palabras[][20] = {"Manzana", "Platano", "Cereza", "Melocotóns"};
// 	int i = -1;
// 	int j;
// 	int num_palabras = sizeof(palabras) / sizeof(palabras[0]);

// 	while (++i < num_palabras)
// 	{
// 		j = -1;
// 		while (++j < num_palabras)
// 		{
// 			if (strcmp(palabras[i], palabras[j]) > 0)
// 			{
// 				char temp[20];
// 				strcpy(temp, palabras[i]);
// 				strcpy(palabras[i], palabras[j]);
// 				strcpy(palabras[j], temp);
// 			}
// 		}
// 	}

// 	printf("Palabras ordenadas:\n");
// 	i = -1;
// 	while (++i < num_palabras)
// 		printf("%s\n", palabras[i]);

// 	return (0);
// }
//=============Ordena según ASCII====================================
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char palabras[][20] = {"Apple_PubSub", "USER", "SHELL", "CLICOLOR"};
// 	int i = -1;
// 	int j;
// 	int num_palabras = sizeof(palabras) / sizeof(palabras[0]);

// 	for (i = 0; i < num_palabras - 1; i++)
// 	{
// 		for (j = i + 1; j < num_palabras; j++)
// 		{
// 			if (strcmp(palabras[i], palabras[j]) > 0)
// 			{
// 				char temp[20];
// 				strcpy(temp, palabras[i]);
// 				strcpy(palabras[i], palabras[j]);
// 				strcpy(palabras[j], temp);
// 			}
// 		}
// 	}

// 	printf("Palabras ordenadas:\n");
// 	for (i = 0; i < num_palabras; i++)
// 	{
// 		printf("%s\n", palabras[i]);
// 	}

// 	return (0);
// }
