/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_splitter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:01:07 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 15:01:07 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>

static void	error_exit(const char *message)
{
	write(2, message, 13);
	exit(1);
}

static size_t	count_lines(char *input)
{
	size_t	lines_count;
	size_t	i;

	lines_count = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '\n')
			lines_count++;
		i++;
	}
	return (lines_count);
}

static char	*allocate_line(size_t length)
{
	char	*line;

	line = (char *)malloc((length + 1) * sizeof(char));
	if (!line)
		error_exit("malloc error\n");
	return (line);
}

static void	fill_lines(char **lines, char *input)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (input[i])
	{
		if (input[i] == '\n')
		{
			lines[j] = allocate_line(i - start);
			k = 0;
			while (start < i)
				lines[j][k++] = input[start++];
			lines[j][k] = '\0';
			start++;
			j++;
		}
		i++;
	}
	lines[j] = NULL;
}

char	**split_lines(char *input)
{
	char	**lines;
	size_t	lines_count;

	lines_count = count_lines(input);
	lines = (char **)malloc((lines_count + 1) * sizeof(char *));
	if (!lines)
		error_exit("malloc error\n");
	fill_lines(lines, input);
	return (lines);
}
