/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaysash <lmaysash@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:36:16 by lmaysash          #+#    #+#             */
/*   Updated: 2024/07/14 20:36:28 by lmaysash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check row left to right
int	check_row_lr(int grid[4][4], int *rules, int i)
{
	int	j;
	int	vis;
	int	max_height;

	j = 0;
	vis = 0;
	max_height = 0;
	while (j < 4)
	{
		if (grid[i][j] > max_height)
		{
			vis++;
			max_height = grid[i][j];
		}
		j++;
	}
	if (vis != rules[8 + i])
		return (0);
	return (1);
}

// Check row right to left
int	check_row_rl(int grid[4][4], int *rules, int i)
{
	int	j;
	int	vis;
	int	max_height;

	j = 3;
	max_height = 0;
	vis = 0;
	while (j >= 0)
	{
		if (grid[i][j] > max_height)
		{
			vis++;
			max_height = grid[i][j];
		}
		j--;
	}
	if (vis != rules[12 + i])
		return (0);
	return (1);
}

// Check column up down
int	check_col_ud(int grid[4][4], int *rules, int i)
{
	int	j;
	int	vis;
	int	max_height;

	max_height = 0;
	j = 0;
	vis = 0;
	while (j < 4)
	{
		if (grid[j][i] > max_height)
		{
			vis++;
			max_height = grid[j][i];
		}
		j++;
	}
	if (vis != rules[i])
		return (0);
	return (1);
}

// Check column down up
int	check_col_du(int grid[4][4], int *rules, int i)
{
	int	j;
	int	vis;
	int	max_height;

	j = 3;
	vis = 0;
	max_height = 0;
	while (j >= 0)
	{
		if (grid[j][i] > max_height)
		{
			vis++;
			max_height = grid[j][i];
		}
		j--;
	}
	if (vis != rules[4 + i])
		return (0);
	return (1);
}

int	isvalid(int grid[4][4], int *rules)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_lr(grid, rules, i))
			return (0);
		if (!check_row_rl(grid, rules, i))
			return (0);
		if (!check_col_ud(grid, rules, i))
			return (0);
		if (!check_col_du(grid, rules, i))
			return (0);
		i++;
	}
	return (1);
}
