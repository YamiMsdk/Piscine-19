/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:05:36 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 23:16:19 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	read_from_stdin(char **input);
void	handle_file(int fd, char **input);
void	print_debug_map(t_map *map);
void	process_input(char *input, int add_newline);
void	handle_args(int argc, char *argv[]);
void	free_lines(char **lines);

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		write(1, map->map[i], my_strlen(map->map[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	process_input(char *input, int add_newline)
{
	char	**lines;
	t_map	*map;
	int		i;

	lines = split_lines(input);
	if (lines[0])
	{
		map = parse_first_line(lines[0]);
		map->map = &lines[1];
		if (validate_map(map))
		{
			find_biggest_square(map);
			print_map(map);
			if (add_newline)
				write(1, "\n", 1);
		}
		else
			write(2, "map error\n", 10);
	}
	free(input);
	free_lines(lines);
}

void	handle_args(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	*input;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(2, "map error\n", 10);
		}
		else
		{
			handle_file(fd, &input);
			close(fd);
			if (input)
			{
				process_input(input, i < argc - 1);
			}
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*input;

	input = NULL;
	if (argc == 1)
		read_from_stdin(&input);
	else
		handle_args(argc, argv);
	if (input)
		process_input(input, 0);
	return (0);
}
