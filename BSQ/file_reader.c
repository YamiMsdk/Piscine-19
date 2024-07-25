/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:49:36 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/24 22:49:39 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	read_from_file(int fd, char **temp_input, size_t *total_length,
		size_t *current_size)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (*total_length + (size_t)bytes_read > *current_size)
			reallocate_temp_input(temp_input, current_size);
		copy_buffer(*temp_input + *total_length, buffer, (size_t)bytes_read);
		*total_length += (size_t)bytes_read;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		write_error("read error\n");
}

void	handle_file(int fd, char **input)
{
	char	*temp_input;
	size_t	total_length;
	size_t	current_size;

	current_size = INITIAL_INPUT_SIZE;
	temp_input = malloc(current_size);
	if (!temp_input)
		write_error("malloc error\n");
	total_length = 0;
	read_from_file(fd, &temp_input, &total_length, &current_size);
	temp_input[total_length] = '\0';
	*input = temp_input;
}
