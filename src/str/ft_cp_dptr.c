/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cp_dptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/01/18 19:55:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Realiza la copia de un doble puntero de char
// devuelve un doble punterto de char.

#include "libft.h"
// #include "../../inc/libft.h"
// #include "../../inc/ft_printf.h"
// #include "../../inc/colors.h"

char	**ft_cp_dptr(char **ori)
{
	int		rows;
	int		i;
	char	**res;

	rows = 0;
	i = 0;
	while (ori[rows])
		rows++;
	res = (char **)ft_calloc(rows + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (i < rows)
	{
		res[i] = ft_substr(ori[i], 0, 0xFFFFFFF);
		i++;
	}
	return (res);
}

//int main(voivd)
//{
//	char **str;
//	str = ft_file_to_dptr("ft_strjoin.c", 0);
//	char **res;
//	res = ft_cp_dptr(str);
//
//	int i = 0;
//	while (str[i])
//	{
//		ft_printf("%s\n", str[i]);
//		i++;
//	}
//	i = 0;
//	while (res[i])
//	{
//		ft_printf(GREEN "%s\n", res[i]);
//		i++;
//	}
//	ft_printf("ori: %p\n", str);
//	ft_printf("cp: %p\n", res);
//	ft_free_dptr(str);
//	ft_free_dptr(res);
//}
