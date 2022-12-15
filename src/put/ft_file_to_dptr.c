/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_dptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:29:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/15 11:35:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <fcntl.h>
#include "error.h"
#include "libft.h"
#include "get_next_line.h"

int static	g_rows;

void static	is_line(char *line, char **res, int control, int *write)
{
	int static	i;

	if (!i)
		i = 0;
	if (control == FALSE)
		g_rows += 1;
	else
	{
		res[i] = ft_substr(line, 0, 0xffffffff);
		i += 1;
		if (g_rows == i)
			*write = TRUE;
	}
}

char	**open_file(char *file, char **res, int control, int *write)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
		{
			if (!res)
				res = (char **)ft_calloc(g_rows + 1, sizeof(char *));
			control = TRUE;
			close(fd);
			if (*write)
				return (res);
			open_file(file, res, control, write);
		}
		else if (line)
			is_line(line, res, control, write);
		free(line);
	}
}

char	**ft_file_to_dptr(char *file)
{
	char	**res;
	int		control;
	int		write;

	g_rows = 0;
	res = NULL;
	control = FALSE;
	write = FALSE;
	return (open_file(file, res, control, &write));
}

// void free_cur(char **str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// }

// int main(void)
// {
// 	char **cur;
// 	char *file = "min.ber";
// 	int i;

// 	cur = ft_file_to_dptr(file);
// 	i = 0;
// 	if (cur)
// 	{
// 		while (cur[i])
// 		{
// 			ft_printf("%s", cur[i]);
// 			i++;
// 		}
// 	}
// 	free_cur(cur);
// }

// gcc get_to_doble_ptr.c -g3 ../../sources/libft/libft.a
