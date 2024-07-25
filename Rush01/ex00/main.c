/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaysash <lmaysash@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:36:35 by lmaysash          #+#    #+#             */
/*   Updated: 2024/07/14 20:37:14 by lmaysash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int		solve(int grid[4][4], int *rules, int col, int row);
int		*ft_to_int_array(char *tab);
int		ft_check_error(int nb, char *tab);
void	ft_write(int grid[4][4]);

void	fillgrid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	grid[4][4];
	int	*rules;
	int	found;

	if (ft_check_error(ac, av[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	fillgrid(grid);
	rules = ft_to_int_array(av[1]);
	found = solve(grid, rules, 0, 0);
	if (found)
		ft_write(grid);
	else
		write(1, "Error\n", 6);
	free(rules);
	return (0);
}
