/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_first_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:16:04 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 14:20:06 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>

void	error_exit(const char *message)
{
	write(2, message, 10);
	exit(1);
}

int	count_max(char *firstline)
{
	int	j;

	j = 0;
	while (firstline[j])
		j++;
	j = j - 3;
	return (j);
}

int	parse_rows(char *first_line, int *index)
{
	int	rows;
	int	i;
	int	j;

	rows = 0;
	i = 0;
	j = 0;
	j = count_max(first_line);
	while (first_line[i] >= '0' && first_line[i] <= '9' && i < j)
	{
		rows = rows * 10 + (first_line[i] - '0');
		i++;
	}
	*index = i;
	return (rows);
}

t_map	*parse_first_line(char *first_line)
{
	t_map	*map;
	int		i;

	if (my_strlen(first_line) < 4)
		error_exit("map error\n");
	map = malloc(sizeof(t_map));
	if (!map)
		error_exit("malloc error\n");
	map->rows = parse_rows(first_line, &i);
	if (my_strlen(first_line + i) < 3)
		error_exit("map error\n");
	map->empty = first_line[i++];
	map->obstacle = first_line[i++];
	map->full = first_line[i];
	if (map->empty == map->obstacle || map->empty == map->full
		|| map->obstacle == map->full)
		error_exit("map error\n");
	map->cols = 0;
	map->map = NULL;
	return (map);
}
