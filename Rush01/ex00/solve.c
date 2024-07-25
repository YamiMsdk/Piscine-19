/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaysash <lmaysash@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:37:21 by lmaysash          #+#    #+#             */
/*   Updated: 2024/07/14 20:37:30 by lmaysash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isvalid(int grid[4][4], int *rules);

// See if height has already been placed in row and column
int	ft_used(int grid[4][4], int col, int row, int height)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == height + 1 || grid[i][col] == height + 1)
			return (1);
		i++;
	}
	return (0);
}

int	solve(int grid[4][4], int *rules, int col, int row)
{
	int	height;

	height = 0;
	if (row == 4)
		return (isvalid(grid, rules));
	if (col == 4)
		return (solve(grid, rules, 0, row + 1));
	while (height < 4)
	{
		if (!ft_used(grid, col, row, height))
		{
			grid[row][col] = height + 1;
			if (solve(grid, rules, col + 1, row))
				return (1);
			grid[row][col] = 0;
		}
		height++;
	}
	return (0);
}
