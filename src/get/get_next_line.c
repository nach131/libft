/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/03 00:00:59 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "get_next_line.h"
#include "libft.h"

void	ft_cut_tp(t_get *tp, int len_trim)
{
	char	*str;
	int		len_tp;

	len_tp = ft_strlen(tp->content);
	str = ft_strjoin(tp->content, "");
	while (len_tp >= 0)
	{
		tp->content[len_tp] = '\0';
		len_tp--;
	}
	len_tp = 0;
	while (str[len_trim] != '\0')
	{
		tp->content[len_tp] = str[len_trim];
		len_trim++;
		len_tp++;
	}
	free(str);
}

void	ft_tp_line_ex(t_get *tp, char **line, int len_tp, char *str)
{
	char	*tmp_tp;

	if (str && *line)
	{
		tmp_tp = (char *)ft_calloc(len_tp, sizeof(tmp_tp));
		ft_memcpy(tmp_tp, tp->content, len_tp);
		str = ft_strjoin(*line, "");
		free(*line);
		*line = ft_strjoin(str, tmp_tp);
		free(tmp_tp);
		free(str);
	}
	else
	{
		len_tp = ft_strlen(tp->content);
		str = ft_strjoin(*line, "");
		free(*line);
		*line = ft_strjoin(str, tp->content);
		free(str);
	}
	ft_cut_tp(tp, len_tp);
}

int	ft_tp_line(t_get *tp, char **line)
{
	char	*str;
	int		len_tp;

	str = ft_strchr(tp->content, '\n');
	len_tp = str - tp->content + 1;
	if (str && !*line)
	{
		str = (char *)ft_calloc(len_tp, sizeof(str));
		ft_memcpy(str, tp->content, len_tp);
		ft_cut_tp(tp, len_tp);
		*line = str;
	}
	else if (str && *line)
		ft_tp_line_ex(tp, &(*line), len_tp, str);
	else if (*tp->content && *line != NULL)
		ft_tp_line_ex(tp, &(*line), len_tp, str);
	else
	{
		len_tp = ft_strlen(tp->content);
		*line = ft_strjoin(tp->content, "");
		ft_cut_tp(tp, len_tp);
	}
	return (1);
}

int	ft_buffer(int fd, t_get *tp, char **line)
{
	if (!*tp->content)
		tp->size_buf = read(fd, tp->content, BUFFER_SIZE);
	if (tp->size_buf < 0)
		return (-1);
	if (*tp->content)
		ft_tp_line(tp, (&(*line)));
	if ((!tp->size_buf && !*line) || (!*tp->content && !tp->size_buf && *line))
		return (0);
	else if (!ft_strchr(*line, '\n'))
		ft_buffer(fd, tp, &(*line));
	return (1);
}

char	*get_next_line(int fd)
{
	static t_get	*tp;
	char			*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (!tp)
		tp = (t_get *)ft_calloc(1, sizeof(t_get));
	if (!tp)
		return (NULL);
	line = (NULL);
	ft_buffer(fd, &(*tp), &line);
	if (line)
		return (line);
	else if ((!line && !((*tp)).size_buf) || (*tp).size_buf < 0)
	{
		if (tp)
			free(tp);
		tp = (NULL);
		return (NULL);
	}
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char *line;

// 	// fd = open("../test/text-copy.txt", O_RDONLY);
// 	// fd = open("../test/nl", O_RDONLY);
// 	fd = open("../test/multiple_nl.txt", O_RDONLY);
// 	// close(fd);

// 	// if (fd == -1)
// 	// 	return (-1);
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (line == NULL)
// 		{
// 			line = get_next_line(fd);
// 			break;
// 		}
// 		else if (line)
// 		{
// 			printf("%s", line);
// 			// printf("----------------\n");
// 			if (line)
// 				free(line);
// 		}
// 	}
// 	return (1);
// }
