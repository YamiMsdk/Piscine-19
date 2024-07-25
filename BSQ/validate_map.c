/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:52:03 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/24 22:52:05 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

int	check_line_length(t_map *map)
{
	size_t	i;
	size_t	cols;

	cols = my_strlen(map->map[0]);
	i = 0;
	while (i < (size_t)map->rows)
	{
		if (my_strlen(map->map[i]) != cols)
			return (0);
		i++;
	}
	map->cols = cols;
	return (1);
}

int	check_characters(t_map *map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (size_t)map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if (map->map[i][j] != map->empty &&
				map->map[i][j] != map->obstacle &&
				map->map[i][j] != map->full)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_map(t_map *map)
{
	if (!map || !map->map)
		return (0);
	if (map->rows < 1 || !map->map[0] || my_strlen(map->map[0]) < 1)
		return (0);
	if (!check_line_length(map))
		return (0);
	if (!check_characters(map))
		return (0);
	return (1);
}
