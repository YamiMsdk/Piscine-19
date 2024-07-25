/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:50:01 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/24 22:50:04 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

int	get_square_size(t_map *map, int row, int col)
{
	int	size;
	int	i;

	size = 0;
	while (row + size < map->rows && col + size < (int)map->cols)
	{
		i = 0;
		while (i <= size)
		{
			if (map->map[row + size][col + i] == map->obstacle ||
				map->map[row + i][col + size] == map->obstacle)
				return (size);
			i++;
		}
		size++;
	}
	return (size);
}

void	update_max_square(t_square_info *square, int size, int row, int col)
{
	square->max_size = size;
	square->max_row = row;
	square->max_col = col;
}

void	fill_square(t_map *map, t_square_info *square)
{
	int	row;
	int	col;

	row = 0;
	while (row < square->max_size)
	{
		col = 0;
		while (col < square->max_size)
		{
			map->map[square->max_row + row][square->max_col + col] = map->full;
			col++;
		}
		row++;
	}
}

void	search_squares(t_map *map, t_square_info *square)
{
	int	current_size;
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < (int)map->cols)
		{
			if (map->map[i][j] == map->empty)
			{
				current_size = get_square_size(map, i, j);
				if (current_size > square->max_size)
					update_max_square(square, current_size, i, j);
			}
			j++;
		}
		i++;
	}
}

void	find_biggest_square(t_map *map)
{
	t_square_info	square;

	square.max_size = 0;
	square.max_row = 0;
	square.max_col = 0;
	search_squares(map, &square);
	fill_square(map, &square);
}
