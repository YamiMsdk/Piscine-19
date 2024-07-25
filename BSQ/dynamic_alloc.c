/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:50:54 by mcarton           #+#    #+#             */
/*   Updated: 2024/07/24 14:50:54 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	write_error(const char *message)
{
	ssize_t	len;

	len = 0;
	while (message[len] != '\0')
		len++;
	write(2, message, len);
	exit(1);
}

void	copy_buffer(char *dest, char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
}

void	reallocate_temp_input(char **temp_input, size_t *current_size)
{
	char	*new_temp_input;
	size_t	new_size;

	new_size = *current_size * 2;
	new_temp_input = malloc(new_size);
	if (!new_temp_input)
		write_error("malloc error\n");
	copy_buffer(new_temp_input, *temp_input, *current_size);
	free(*temp_input);
	*temp_input = new_temp_input;
	*current_size = new_size;
}
