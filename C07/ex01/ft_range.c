/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:02:14 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 18:19:51 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc((size) * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
	int min = 10;
	int max = 30;
	int i = 0;
	int *array = ft_range(min, max);
	
	while (min < max)
	{
		printf("%d ", array[i]);
		i++;
		min++;
	}
}*/
