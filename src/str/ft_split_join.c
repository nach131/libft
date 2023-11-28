/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:00:55 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/11/23 11:35:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Junta doble puntero de char en un puntero char

#include "libft.h"

char *ft_split_join(char **split)
{
	int i;
	char *res;

	i = 0;
	res = NULL;
	while (split[i])
	{
		if (res == NULL)
			res = ft_strdup(split[i]);
		else
			res = ft_strjoin(res, split[i]);
		i++;
	}
	return (res);
}

// int main(void)
// {
// 	char *split[] = {"uno,", "dos,", "tres", NULL};

// 	char *res = ft_split_join(split);
// 	printf("%s\n", res);
// 	free(res);
// }

// uno,dos,tres
