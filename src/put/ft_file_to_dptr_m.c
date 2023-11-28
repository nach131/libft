/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_dptr_m.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:39:31 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/11/28 21:48:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	**ft_file_to_dptr_m(int fd)
{
	char	**lines;
	char	*line;
	size_t	line_count;

	lines = NULL;
	line_count = 0;
	while (42)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		lines = realloc(lines, (line_count + 1) * sizeof(char *));
		lines[line_count] = line;
		line_count++;
	}
	lines = realloc(lines, (line_count + 1) * sizeof(char *));
	lines[line_count] = NULL;
	return (lines);
}

// #include <fcntl.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	int fd = open(argv[1], O_RDONLY);
// 	char **file_content = ft_file_to_dptr_m(fd);

// 	// Imprimir el contenido del archivo
// 	for (int i = 0; file_content[i] != NULL; i++)
// 	{
// 		printf("%s", file_content[i]);
// 		free(file_content[i]); // Liberar la memoria de cada línea
// 	}

// 	free(file_content); // Liberar la memoria del arreglo de líneas

// 	int fd2 = open(argv[1], O_RDONLY);
// 	char **tomate = ft_file_to_dptr_m(fd2);

// 	for (int i = 0; tomate[i] != NULL; i++)
// 	{
// 		printf("%s", tomate[i]);
// 		free(tomate[i]); // Liberar la memoria de cada línea
// 	}
// 	free(tomate);

// 	return (0);
// }
