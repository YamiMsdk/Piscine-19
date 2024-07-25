/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:04:02 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 23:16:32 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>

typedef struct xx
{
	int		rows;
	size_t	cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}	t_map;

typedef struct s_square_info
{
	int	max_size;
	int	max_row;
	int	max_col;
}	t_square_info;

# define BUFFER_SIZE 1024
# define INITIAL_INPUT_SIZE 4096

int		validate_map(t_map *map);	
void	read_from_stdin(char **input);
void	handle_file(int fd, char **input);
t_map	*parse_first_line(char *first_line);
void	find_biggest_square(t_map *map);
void	print_map(t_map *map);
char	**split_lines(char *input);
size_t	my_strlen(char *str);
void	write_error(const char *message);
void	copy_buffer(char *dest, char *src, size_t length);
void	reallocate_temp_input(char **temp_input, size_t *current_size);
void	free_lines(char **lines);

#endif
