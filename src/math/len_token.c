/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_token.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:22:09 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/07/21 12:43:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                      https://github.com/nach131                        ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

// Cuenta cuantos elementos separados por el token en un string

int	len_token(char *str, char *token)
{
	int	i;

	i = 0;
	while (str != NULL)
	{
		i++;
		str = ft_strtok(NULL, token);
	}
	return (i);
}

// int main(void)
// {
// 	int num_item;
// 	char *path_copy;
// 	char *token;

// 	char *path = "/Library/Frameworks/Python.framework/Versions/3.10/bin:/
// Library/Frameworks/Python.framework/Versions/3.7/bin:/usr/local/bin:/
// usr/bin:/bin:/
// usr/sbin:/sbin:/Applications/VMware Fusion.app/Contents/Public:/
// opt/X11/bin:/usr/local/mongodb/bin";

// 	path_copy = ft_strdup(path);
// 	token = ft_strtok(path_copy, ":");
// 	num_item = len_token(token, ":");
// 	printf("num_item: %d\n", num_item);
// }

// num_item: 10
