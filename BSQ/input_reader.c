/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:00:48 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 15:00:48 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>

static void	read_loop(char **input, char *temp_input, size_t *total_length,
	size_t *current_size)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	bytes_read = read(0, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (*total_length + (size_t)bytes_read > *current_size)
			reallocate_temp_input(&temp_input, current_size);
		copy_buffer(temp_input + *total_length, buffer, (size_t)bytes_read);
		*total_length += (size_t)bytes_read;
		bytes_read = read(0, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		write_error("read error\n");
	temp_input[*total_length] = '\0';
	*input = temp_input;
}

void	read_from_stdin(char **input)
{
	char	*temp_input;
	size_t	total_length;
	size_t	current_size;

	current_size = INITIAL_INPUT_SIZE;
	temp_input = malloc(current_size);
	if (!temp_input)
		write_error("malloc error\n");
	total_length = 0;
	read_loop(input, temp_input, &total_length, &current_size);
}
